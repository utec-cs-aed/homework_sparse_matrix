#include <iostream>
#include <chrono>
#include <ctime>
#include <unistd.h>
#include <random>
#include "arraysparsematrix.h"
#include "listsparsematrix.h"

using namespace std;

template<template<typename T> typename Matrix> 
void  testOperations() {
    unsigned rows = 5, cols = 5;
    Matrix<int> matrix1(rows, cols);
    matrix1.set(0, 0, 2);
    matrix1.set(2, 1, 3);
    matrix1.set(2, 3, 1);
    matrix1.set(3, 0, 2);
    matrix1.set(4, 4, 2);
    cout<<"Matrix 1:\n";
    matrix1.display();

    Matrix<int> matrix2(rows, cols);
    matrix2.set(0, 1, 2);
    matrix2.set(2, 3, 3);
    matrix2.set(3, 0, 1);
    matrix2.set(3, 4, 2);
    matrix2.set(4, 4, 1);
    cout<<"Matrix 2:\n";
    matrix2.display();
    
    Matrix<int> matrix3;
    matrix3 = matrix1.add(matrix2);        
    cout<<"\nSuma:\n";
    matrix3.display();

    matrix3 = matrix1.subtract(matrix2);    
    cout<<"\nResta:\n";
    matrix3.display();

    matrix3 = matrix1.multiply(matrix2);    
    cout<<"\nMultiplicacion Matricial:\n";
    matrix3.display();

    matrix3 = matrix1.multiply(3);       
    cout<<"\nMultiplicacion Escalar:\n";
    matrix3.display();

    matrix3 = matrix1.transpose();       
    cout<<"\nTranspuesta de Matrix 1:\n";
    matrix3.display();
}


vector <int*> generateRandomData (int N, int size) {
    default_random_engine gen; 
    std::uniform_int_distribution<int> randInt (0, N - 1);	// [0, N-1]
    vector <int*>data (size);
    for (int i = 0; i < size; i++)
        data[i] = new int[3] {randInt(gen), randInt(gen), randInt(gen)};
    return data;
}

template<template<typename T> typename Matrix>
void testPerformance(int N, vector<int*> data1, vector<int*> data2){
    Matrix<int> matrix1(N, N), matrix2(N, N);
    //populate with random data
    auto start = std::chrono::steady_clock::now();
    for(int i=0;i<data1.size();i++) {
        int *triple1 = data1[i], *triple2 = data2[i];
        matrix1.set(triple1[0], triple1[1], triple1[2]);
        matrix2.set(triple1[0], triple2[1], triple2[2]);
    }
    //test an operation
    Matrix<int> matrix3;
    matrix3 = matrix1.multiply(matrix2);  
    auto end = std::chrono::steady_clock::now();
    //show the elapsed time
    cout << " Time for " << N << " x " << N << ": "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()<< " ms" << endl;
}

int main() {
    testOperations<ArraySparseMatrix>();
    testOperations<ListSparseMatrix>();
    for(int i = 3; i <= 10; i++) {
        int N = pow(2, i);
        int size = 0.05 * N * N;
        vector<int*> data1 = generateRandomData(N, size);
        vector<int*> data2 = generateRandomData(N, size);
        testPerformance<ArraySparseMatrix>(N, data1, data2);
        testPerformance<ListSparseMatrix>(N, data1, data2);
    }
    return 0;
}
