#pragma once
#include <iostream>
double determinant(double** A, int n);
double** inverseMatrix(double** A, int n);
template <typename T>
T** minorMatrix(T** A, int n, int row, int col);
template <typename T>
void swapColumns(T** M, double n, int col1, int col2);
template <typename T>
void printMatrix(T** M, int rows, int columns, const char pre[]);
template <typename T>
T** createMatrix(int n, int m);
template <typename T>
T** inputMatrix(int n, int m);
template <typename T>
void deleteMatrix(T** M, int n);
template <typename T>
T** copyMatrix(T** M, int n, int m);

