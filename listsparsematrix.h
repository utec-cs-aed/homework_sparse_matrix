#ifndef LIST_SPARSE_MATRIX_H
#define LIST_SPARSE_MATRIX_H
#include "sparsematrix.h"
#include <vector>
using namespace std;

template <typename T>
struct Node {
    public:
        T data;
        int pos_row;
        int pos_col;
        Node<T>* next_row;
        Node<T>* next_col;
};

template <class T>
class ListSparseMatrix : public SparseMatrix<T> {
    private:
        Node<T>** rows;
        Node<T>** cols;                

    public:
        ListSparseMatrix();
        ListSparseMatrix(unsigned rows, unsigned columns);
        ~ListSparseMatrix();

        bool set(unsigned i, unsigned j, T data);

        T get(unsigned i, unsigned j);//O(1) + O(m)
        bool remove(unsigned i, unsigned j);

        T operator()(unsigned i, unsigned j);   
        ListSparseMatrix<T>& operator * (T scalar);   
        ListSparseMatrix<T>& operator + (const ListSparseMatrix<T> &other);  
        ListSparseMatrix<T>& operator - (const ListSparseMatrix<T> &other);
        ListSparseMatrix<T>& operator * (const ListSparseMatrix<T> &other);
        ListSparseMatrix<T>& transpose();
        
        void display();
};

#endif

