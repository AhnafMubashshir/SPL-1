#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void add_matrix(double mat1[][N], double mat2[][N], double add_mat[][N], int r, int c)
{
    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
            add_mat[j][i]= mat1[i][j] + mat2[i][j];
        }
    }
}
