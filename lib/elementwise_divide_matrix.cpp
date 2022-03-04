#include<bits/stdc++.h>
#include "header.h"
using namespace std;

//Transpose Matrix
void elementwise_devide_matrix(double mat1[][N], double mat2[][N], double el_div_mat[][N], int r, int c)
{
    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
            el_div_mat[i][j]= mat1[i][j] / mat2[i][j];
        }
    }
}

