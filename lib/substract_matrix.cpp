#include<bits/stdc++.h>
#include "header.h"
using namespace std;

//Transpose Matrix
void subtract_matrix(double mat1[][100], double mat2[][100], double subtract_mat[][100], int r, int c)
{
    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
            subtract_mat[j][i]= mat1[i][j] - mat2[i][j];
        }
    }
}

