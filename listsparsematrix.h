#ifndef LIST_SPARSE_MATRIX_H
#define LIST_SPARSE_MATRIX_H
#include "sparsematrix.h"
#include <vector>
using namespace std;

template <typename T>
struct Node {
    public:
        T data;
        int posX;
        int posY;
        Node<T>* next;
        Node<T>* down;
};

template <class T>
class ListSparseMatrix : public SparseMatrix<T> {
    private:
        vector<Node<T>*> X;
        vector<Node<T>*> Y;
        unsigned rows;
        unsigned columns;

    public:
        ListSparseMatrix(unsigned rows, unsigned columns);
        ~ListSparseMatrix();
};

#endif

