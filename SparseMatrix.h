#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

template <typename T>
class SparseMatrix {
    protected:
        unsigned rows;
        unsigned columns;

    public:       
        virtual bool set(unsigned i, unsigned j, T data) = 0;
        virtual T get(unsigned i, unsigned j) = 0;
        virtual bool remove(unsigned i, unsigned j) = 0;
        virtual bool compareTo(const SparseMatrix<T> &m2) = 0;
        virtual SparseMatrix<T>& transpose() = 0;
        virtual SparseMatrix<T>& add(const SparseMatrix<T> &m2) = 0;
        virtual SparseMatrix<T>& subtract(const SparseMatrix<T> &m2) = 0;
        virtual SparseMatrix<T>& multiply(double scalar) = 0;//Scalar Multiplication
        virtual SparseMatrix<T>& multiply(const SparseMatrix<T> &m2) = 0;//Matrix Multiplication
        virtual void display() = 0; 
        virtual void clear()=0;//clear the matrix
        virtual ~SparseMatrix(){}
};

#endif