#ifndef ARRAY_SPARSE_MATRIX_H
#define ARRAY_SPARSE_MATRIX_H

#include <iostream>
#include "sparsematrix.h"
using namespace std;

template <class T>
class ArraySparseMatrix : public SparseMatrix<T> {
    private:
        struct Node {
            public:
                T data;
                int pos_row;
                int pos_col;
                Node* next;
                Node* down;
        };

        Node** rows;//array of lists
        Node** cols;//array of lists 
    public:
        ArraySparseMatrix(){
            //TODO
        }
        ArraySparseMatrix(unsigned rows, unsigned columns){
            //TODO
        }
        ~ArraySparseMatrix(){
            //TODO
        }
        void operator=(const SparseMatrix<T> &other){
            //TODO
        }

        bool set(unsigned i, unsigned j, T data) {
            throw std::runtime_error("");
        }
        T get(unsigned i, unsigned j) {
            throw std::runtime_error("method not yet implemented");
        }
        bool remove(unsigned i, unsigned j) {
            throw std::runtime_error("method not yet implemented");
        }
        bool compareTo(const SparseMatrix<T> &m2) {
            throw std::runtime_error("method not yet implemented");
        }
        SparseMatrix<T>& transpose() {
            throw std::runtime_error("method not yet implemented");
        }
        SparseMatrix<T>& add(const SparseMatrix<T> &m2) {
            throw std::runtime_error("method not yet implemented");
        }
        SparseMatrix<T>& subtract(const SparseMatrix<T> &m2) {
            throw std::runtime_error("method not yet implemented");
        }
        SparseMatrix<T>& multiply(double scalar) {
            throw std::runtime_error("method not yet implemented");
        }
        SparseMatrix<T>& multiply(const SparseMatrix<T> &m2) {
            throw std::runtime_error("method not yet implemented");
        }
        void display() {
            throw std::runtime_error("method not yet implemented");
        } 
        void clear(){
            throw std::runtime_error("method not yet implemented");
        }
};

#endif