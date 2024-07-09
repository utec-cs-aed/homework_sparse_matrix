# Alumno: ____   _____

# Sparse Matrix
- Implementar el Sparse Matrix usando listas enlazadas en su dos versiones: Manteniendo las cabeceras de las filas y columnas en arrays de tamaño fijo (ArraySparseMatrix) y manteniendo las cabeceras en listas enlazadas (ListSparseMatrix). 

![Array Sparse Matrix](https://i.sstatic.net/TMf3x.jpg)
*ArraySparseMatrix*


![List Sparse Matrix](https://www.cs.usfca.edu/~galles/cs245S15/SparseArray/SparseArrayEx.jpg)
*ListSparseMatrix*

- Asumimos que el sparse matrix solo admite datos numericos (int, short, float, double), en donde el cero (0) representa el vacío.

- Debe implementar todas las operaciones matriciales lo más eficiente posible. Recuerde que las operaciones básicas de $get$ y $set$ tienen complejidad $O(k)$, siendo k el tamaño de la lista.

- Agregue más casos de prueba con el fin de evaluar todas las funciones del Sparse Matrix.

- Además, usted debe realizar un análisis experimental del desempeño de ambas técnicas anotando los tiempos computacionales en el siguiente cuadro y genere su gráfica respectiva:

| N   | ArraySparseMatrix | ListSparseMatrix |
|-----|------------------|------------------|
| 2^3 |                  |                  |
| 2^4 |                  |                  |
| 2^5 |                  |                  |
| 2^6 |                  |                  |
| 2^7 |                  |                  |
| 2^8 |                  |                  |
| 2^9 |                  |                  |
| 2^10 |                  |                  |

    * rows = columns = N 
    * Use un factor de llenado máximo de 0.05
    * Por un tema de justicia ambas técnicas deben recibir los mismos datos. 
