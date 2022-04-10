#include<bits/stdc++.h>
#include "header.h"
using namespace std;

//Inverse matrix
void inverse_matrix(double **mat, double **inv_mat, int r, int c)
{
    int i,j, sign=1;
    double det;

    double** sub_mat= new double*[r-1];
    for(int i=0; i<c-1; i++) sub_mat[i]= new double[c-1];

    double** Adj_mat= new double*[r];
    for(int i=0; i<c; i++) Adj_mat[i]= new double[c];

    double** t_Adj_mat= new double*[r];
    for(int i=0; i<c; i++) t_Adj_mat[i]= new double[c];

    double** temp= new double*[c];
    for(int i=0; i<r; i++) temp[i]= new double[r];

    double** temp1= new double*[c];
    for(int i=0; i<c; i++) temp1[i]= new double[c];

    double** temp2= new double*[c];
    for(int i=0; i<r; i++) temp2[i]= new double[r];

    det= determenent(mat, r, c);

    //using pseudo inverse
    transpose_matrix(mat, temp, r, c);
    multiply_matrix(temp, mat, temp1, c, r, c);

    //adjacence matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sub_matrix_initializer(temp1, sub_mat, r, c, i, j);
            Adj_mat[i][j]=(sign*determenent(sub_mat, r-1, c-1));
            sign=-sign;
        }
    }
    transpose_matrix(Adj_mat, t_Adj_mat, r, c);
    multiply_matrix(temp, t_Adj_mat, temp2, c, c, r);

    //inversed matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            temp2[i][j]/=det;
        }
    }

    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            inv_mat[i][j]=temp2[i][j];
        }
    }

    delete[] sub_mat;
    delete[] Adj_mat;
    delete[] t_Adj_mat;
    delete[] temp;
    delete[] temp1;
    delete[] temp2;
}
