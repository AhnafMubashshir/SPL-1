#include<bits/stdc++.h>
#include "header.h"
using namespace std;

double determenent(double **res, int r, int c)
{
    double det=0;

    if(r==1) return res[0][0];
    else if(r==2) return ((res[0][0]*res[1][1])-(res[0][1]*res[1][0]));

    double** sub_mat=new double*[r-1];
    for(int i=0; i<r-1; i++) sub_mat[i]=new double[c-1];

    int sign=1;
    for(int i=0;i<r;i++){
        sub_matrix_initializer(res, sub_mat, r, c, 0, i);
        det+=(sign*res[0][i]*determenent(sub_mat, r-1, c-1));
        sign=-sign;
        delete[] sub_mat;
    }
    delete[] sub_mat;

    return det;
}
