#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void sub_matrix_initializer(double mat[][N], double sub_mat[][N], int r, int r1, int c1)
{
    int k=0, l=0;

    for(int i=0;i<r;i++){
        if(i==r1) continue;
        for(int j=0;j<r;j++){
            if(j!=c1){
                sub_mat[k][l]=mat[i][j];
                l++;
            }
        }
        k++, l=0;
    }
}
