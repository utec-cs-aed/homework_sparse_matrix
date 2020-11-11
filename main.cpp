#include <iostream>
#include "hashsparsematrix.h"
#include "listsparsematrix.h"

template<typename T>
void generateRandom(SparseMatrix<T> *matrix, float factor);
void comparePerformance();
void  testHashSparse(int option);
void  testListSparse(int option);

int main(int argc, char const *argv[])
{
    int  option1, option2;
    option1 = atoi(argv[1]);     
    option2 = atoi(argv[2]);      
    if(option1 == 1)
       testHashSparse(option2);
    else
       testListSparse(option2);    
    return 0;
}

void  testHashSparse(int option){
    HashSparseMatrix<int> *matrix1, *matrix2, matrix3;
    unsigned rows, cols, count, posx, posy;
    int value;
    cin>>rows>>cols>>count;
    matrix1 = new HashSparseMatrix<int>(rows, cols);
    matrix2 = new HashSparseMatrix<int>(rows, cols);
    for (int i = 0; i < count; i++)
    {
        cin>>posx>>posy>>value;
        matrix1->set(posx, posy, value);
    }
    for (int i = 0; i < count; i++)
    {
        cin>>posx>>posy>>value;
        matrix2->set(posx, posy, value);
    }
    switch (option)
    {
    case 1:
        matrix3 = (*matrix1) + (*matrix2);
        break;
    case 2:
        matrix3 = (*matrix1) - (*matrix2);
        break;
    case 3:
        matrix3 = (*matrix1) * (*matrix2);
        break;
    case 4:
        matrix3 = (*matrix1) * 2;
        break;
    default:
        break;
    }
    matrix3.display();
}

void  testListSparse(int option){
    ListSparseMatrix<int> *matrix1, *matrix2, matrix3;
    unsigned rows, cols, count, posx, posy;
    int value;
    cin>>rows>>cols>>count;
    matrix1 = new ListSparseMatrix<int>(rows, cols);
    matrix2 = new ListSparseMatrix<int>(rows, cols);
    for (int i = 0; i < count; i++)
    {
        cin>>posx>>posy>>value;
        matrix1->set(posx, posy, value);
    }
    for (int i = 0; i < count; i++)
    {
        cin>>posx>>posy>>value;
        matrix2->set(posx, posy, value);
    }
    switch (option)
    {
    case 1:
        matrix3 = (*matrix1) + (*matrix2);
        break;
    case 2:
        matrix3 = (*matrix1) - (*matrix2);
        break;
    case 3:
        matrix3 = (*matrix1) * (*matrix2);
        break;
    case 4:
        matrix3 = (*matrix1) * 2;
        break;
    default:
        break;
    }
    matrix3.display();
}

template<typename T>
void generateRandom(SparseMatrix<T> *matrix, float factor){
    //TODO
}

void comparePerformance(){
    //TODO
}