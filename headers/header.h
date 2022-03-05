#include<bits/stdc++.h>
#include "constants.h"
using namespace std;

void add_matrix(double mat1[][N], double mat2[][N], double add_mat[][N], int r, int c);

void copy_matrix(double matrix1[][N], double matrix2[][N], int row, int col);

double determenent(double res[][N], int r);

void elementwise_devide_matrix(double mat1[][N], double mat2[][N], double el_div_mat[][N], int r, int c);

void elementwise_multiply_matrix(double mat1[][N], double mat2[][N], double el_mul_mat[][N], int r, int c);

double error(double mat[][N], double mat1[][N], double mat2[][N], int r1, int c, int c2);

void gaussian_initializer(double mat[][N], int row, int col);

void hadamard(double matrix[][N], int row, int col, int change_dimension);

void inverse_matrix(double mat[][N], double inv_mat[][N], int r, int c);

void matrix_normalizer(double mat[][N], int row, int col);

void multiplicative_update(double matrix[][N], double matrix1[][N], double matrix2[][N], int row, int col, int k);

void multiply_matrix(double mat1[][N], double mat2[][N], double res[][N], int r1, int c, int c2);

void print_matrix(double matrix[][N], int row, int col);

double random_number();

double sd(double mat[][N], int r, int c);

void sub_matrix_initializer(double mat[][N], double sub_mat[][N], int r, int r1, int c1);

void subtract_matrix(double mat1[][N], double mat2[][N], double subtract_mat[][N], int r, int c);

void transpose_matrix(double res[][N], double transpose_mat[][N], int r, int c);


