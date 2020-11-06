#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

template <typename T>
class SparseMatrix {
    public:
        bool set(unsigned posX, unsigned posY, T data) = 0;
        T get(unsigned posX, unsigned posY) = 0;
        bool remove(unsigned posX, unsigned posY) = 0;

        T operator()(unsigned posX, unsigned posY) = 0;   
        SparseMatrix<T> operator*(T scalar) = 0;   
        SparseMatrix<T> operator+(Matrix<T> other) = 0;  
        SparseMatrix<T> operator-(Matrix<T> other) = 0;
        SparseMatrix<T> operator*(Matrix<T> other) = 0;
        SparseMatrix<T> transpose() = 0;
        void display() = 0;
};

#endif