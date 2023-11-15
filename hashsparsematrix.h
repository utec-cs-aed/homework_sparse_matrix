#ifndef HASH_SPARSE_MATRIX_H
#define HASH_SPARSE_MATRIX_H
#include "sparsematrix.h"
#include <unordered_map>
using namespace std;

template <typename T>
class HashSparseMatrix: public SparseMatrix<T>
{
    private:
        std::unordered_map<int, T> hash; //usar su propia implementacion de HashTable

    public:
        HashSparseMatrix();
        HashSparseMatrix(unsigned rows, unsigned columns);
        ~HashSparseMatrix();

        bool set(unsigned i, unsigned j, T data);
        T get(unsigned i, unsigned j);
        bool remove(unsigned i, unsigned j);

        T& operator()(unsigned i, unsigned j); 

        HashSparseMatrix<T>& operator * (T scalar);   
        HashSparseMatrix<T>& operator + (const HashSparseMatrix<T> &other);  
        HashSparseMatrix<T>& operator - (const HashSparseMatrix<T> &other);
        HashSparseMatrix<T>& operator * (const HashSparseMatrix<T> &other);
        HashSparseMatrix<T>& transpose();        
        void display();
};

#endif
