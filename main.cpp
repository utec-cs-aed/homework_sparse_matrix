#include <iostream>
#include "hashsparsematrix.h"
#include "listsparsematrix.h"

template<typename T>
void generateRandom(SparseMatrix<T> *matrix, float factor);
void comparePerformance();

int main()
{
    unsigned rows, cols, count, option1, option2, posx, posy;
    int value, scalar;
    SparseMatrix<int> matrix1, matrix2, matrix3;
    cin>>option;    
    cin>>rows>>cols>>count;

    if(option1 == 1)
    {
        matrix1 = HashSparseMatrix<int>(rows, cols);
        matrix2 = HashSparseMatrix<int>(rows, cols);
    }
    else
    {
        matrix1 = ListSparseMatrix<int>(rows, cols);  
        matrix2 = ListSparseMatrix<int>(rows, cols);  
    }

    for (int i = 0; i < count; i++)
    {
        cin>>posx>>posy>>value;
        matrix1.set(posx, posy, value);
    }
    for (int i = 0; i < count; i++)
    {
        cin>>posx>>posy>>value;
        matrix2.set(posx, posy, value);
    }

    switch (option2)
    {
    case 1:
        matrix3 = matrix1 + matrix2;
        break;
    case 2:
        matrix3 = matrix1 - matrix2;
        break;
    case 3:
        matrix3 = matrix1 * matrix2;
        break;
    case 3:
        matrix3 = matrix1 * 2;
        break;
    default:
        break;
    }
    matrix3.display();   
    return 0;
}

void generateRandom(SparseMatrix<T> *matrix, float factor){
    //TODO
}

void comparePerformance(){
    //TODO
}