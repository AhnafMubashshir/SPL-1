#include "header.h"

void hadamard(double **mat, int row, int col, int change_dimension)
{
//    double* H=(double*) malloc(N*N);
//    double* D=(double*) malloc(N*N);
//    double* S=(double*) malloc(N*N);
//    double* I=(double*) malloc(N*N);
//    double* temp=(double*) malloc(N*N);
//    double* temp1=(double*) malloc(N*N);
//    int i, j, k, h_dimension;
//
//    for(i=2;; i++){
//        if(pow(2, i)>=row) break;
//    }
//    for(j=2;; j++){
//        if(pow(2, j)>=col) break;
//    }
//
//    if(i>=j) h_dimension= pow(2, i);
//    else h_dimension=pow(2, j);
//
//    for(i=0;i<h_dimension;i++){
//        for(j=0;j<h_dimension;j++){
//            if(i%2!=0 && j%2!=0) H[i][j]=-1/sqrt(h_dimension);
//            else H[i][j]=1/sqrt(h_dimension);
//        }
//    }
//
//    for(i=0; i<h_dimension; i++){
//        for(j=0; j<h_dimension; j++){
//            if(i==j && i<h_dimension/2) D[i][j]=1;
//            else if(i==j && i<h_dimension) D[i][j]=-1;
//            else D[i][j]=0;
//        }
//    }
//
//    multiply_matrix(D,H,temp,h_dimension,h_dimension,h_dimension);
//
//    for(i=0;i<h_dimension;i++){
//        for(j=0;j<h_dimension;j++){
//            if(i==j) I[i][j]=1;
//        }
//    }
//
//    if(row==change_dimension){
//            for(i=0, k=rand()%h_dimension; i<row ;i++){
//            for(j=0;j<h_dimension;j++){
//                S[i][j]=temp[k][j];
//            }
//        }
//    }
//    else{
//            for(i=0; i<h_dimension ;i++){
//            for(j=0, k=rand()%h_dimension ; j<col ;j++){
//                S[i][j]=temp[k][j];
//            }
//        }
//    }
//
////    print_matrix(S, h_dimension, h_dimension);
//
////    multiply_matrix(temp,S,temp1,h_dimension, h_dimension, col);
//
////    print_matrix(temp1, h_dimension, col);
//
//    for(i=0;i<h_dimension;i++){
//        for(j=0;j<h_dimension;j++){
//            temp1[i][j]*=sqrt(h_dimension/change_dimension);
//        }
//    }
//
//    copy_matrix(matrix, S, row, col);
//
////    print_matrix(matrix, row, col);
//
}
