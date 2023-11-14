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
        virtual void display() = 0; 
};

#endif
