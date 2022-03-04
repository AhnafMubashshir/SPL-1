#include<bits/stdc++.h>
#include "header.h"
using namespace std;

double error(double mat[][N], double mat1[][N], double mat2[][N], int r1, int c, int c2)
{
    double result[N][N]={};

    multiply_matrix(mat1, mat2, result, r1, c, c2);

    double er=0;

    for(int i=0;i<r1; i++){
        for(int j=0;j<c2;j++){
            er+= pow((mat[i][j] - result[i][j]),2);
        }
    }

    return sqrt(er);
}

