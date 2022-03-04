#include<bits/stdc++.h>
#include "header.h"

void copy_matrix(double matrix1[][N], double matrix2[][N], int row, int col)
{
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++) matrix1[i][j]=matrix2[i][j];
    }
}

