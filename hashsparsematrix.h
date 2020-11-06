#ifndef HASH_SPARSE_MATRIX_H
#define HASH_SPARSE_MATRIX_H
#include "sparsematrix.h"
#include <unordered_map>
using namespace std;

template <typename T>
class HashSparseMatrix: public SparseMatrix<T>
{
    private:
        std::unordered_map<int, T> hash; 

    public:
        //TODO: implement the methods
        HashSparseMatrix(unsigned rows, unsigned columns);
        ~HashSparseMatrix();
};

#endif