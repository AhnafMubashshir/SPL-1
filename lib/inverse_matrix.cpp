#include<bits/stdc++.h>
#include "header.h"
using namespace std;

//Inverse matrix
void inverse_matrix(double mat[][N], double inv_mat[][N], int r, int c)
{
    double sub_mat[N][N]={}, Adj_mat[N][N]={}, t_Adj_mat[N][N]={};
    double temp[N][N]={}, temp1[N][N]={}, temp2[N][N]={};
    int i,j, sign=1;
    double det;

    det= determenent(mat, r);

    //using pseudo inverse
    transpose_matrix(mat, temp, r, c);
    multiply_matrix(temp, mat, temp1, c, r, c);

    //adjacence matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sub_matrix_initializer(temp1, sub_mat, r, i, j);
            Adj_mat[i][j]=(sign*determenent(sub_mat, r-1));
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
}
