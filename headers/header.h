#pragma once
#include<bits/stdc++.h>
#include "constants.h"
using namespace std;

void add_matrix(double **mat1, double **mat2, double **add_mat, int r, int c);

void copy_matrix(double **mat1, double **mat2, int row, int col);

double determenent(double **res, int r, int c);

void elementwise_devide_matrix(double **mat1, double **mat2, double **el_div_mat, int r, int c);

void elementwise_multiply_matrix(double **mat1, double **mat2, double **el_mul_mat, int r, int c);

double error(double **mat, double **mat1, double **mat2, int r1, int c, int c2);

void gaussian_initializer(double **mat, int row, int col);

void hadamard(double **mat, int row, int col, int change_dimension);

void inverse_matrix(double **mat, double **inv_mat, int r, int c);

void matrix_normalizer(double **matrix, int row, int col);

void multiplicative_update(double **mat, double **mat1, double **mat2, int row, int col, int k);

void multiply_matrix(double **mat1, double **mat2, double **res, int r1, int c, int c2);

void print_matrix(double **mat, int row, int col);

double random_number();

double sd(double **mat, int r, int c);

void sub_matrix_initializer(double **mat, double **sub_mat, int r, int c, int r1, int c1);

void subtract_matrix(double **mat1, double **mat2, double **subtract_mat, int r, int c);

void transpose_matrix(double **mat, double **transpose_mat, int r, int c);
