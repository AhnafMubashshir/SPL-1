#include<bits/stdc++.h>
#include "header.h"
using namespace std;

//Transpose Matrix
void transpose_matrix(double mat[][N], double transpose_mat[][N], int r, int c)
{
    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
            transpose_mat[j][i]=mat[i][j];
        }
    }
}
