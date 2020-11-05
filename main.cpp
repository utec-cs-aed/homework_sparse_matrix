#include <iostream>
#include "hashsparsematrix.h"
#include "listsparsematrix.h"

template<typename T>
void generateRandom(SparseMatrix<T> *matrix, float factor);

int main()
{
    int rows = 10, cols = 10, scalar = 2;

    SparseMatrix<int> matrix1 =  HashSparseMatrix<int>(rows, cols); 
    SparseMatrix<int> matrix2 =  HashSparseMatrix<int>(rows, cols); 

    std::cout<<"Matrix1:"<<endl;
    std::cout<<matrix1<<endl;

    std::cout<<"Matrix2:"<<endl;
    std::cout<<matrix1<<endl;

    generateRandom<int>(matrix1, 0.2);//porcentaje de elementos no-vacios
    generateRandom<int>(matrix2, 0.2);//porcentaje de elementos no-vacios
    
    SparseMatrix<int> result; 

    std::cout<<"Matrix1 * "<<scalar<<":"<<endl;
    SparseMatrix<int> result = matrix1 * scalar;
    std::cout<<result<<endl;

    std::cout<<"Matrix1 +  Matrix2:"<<endl;
    SparseMatrix<int> result = matrix1  +  matrix2;
    std::cout<<result<<endl;

    std::cout<<"Matrix1 -  Matrix2:"<<endl;
    SparseMatrix<int> result = matrix1  -  matrix2;
    std::cout<<result<<endl;

    std::cout<<"Matrix1 *  Matrix2:"<<endl;
    SparseMatrix<int> result = matrix1  *  matrix2;
    std::cout<<result<<endl;

    return 0;
}