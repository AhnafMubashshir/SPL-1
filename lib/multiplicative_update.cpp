#include<bits/stdc++.h>
#include "header.h"

void multiplicative_update(double matrix[][N], double matrix1[][N], double matrix2[][N], int row, int col, int k)
{
    double temp[N][N]={}, temp1[N][N]={}, temp2[N][N]={}, temp3[N][N]={}, temp4[N][N]={}, temp5[N][N]={};
    double err=error(matrix , matrix1, matrix2, row, k, col);
    int cnt;

    for(int i=2;;i++){
        if((err<=-0.05 || err>=0.05)){
            if(i%2==0){
                transpose_matrix(matrix1, temp, row, k); //keeps the transpose matrix of matrix-1 in temp(k*row)
                multiply_matrix(temp, matrix, temp1, k, row, col); //keeps the multiplied matrix of temp & matrix in temp1(k*col)


                multiply_matrix(temp, matrix1, temp2, k, row, k); //keeps the multiplied matrix in temp2(k*k)
                multiply_matrix(temp2, matrix2, temp3, k, k, col); //keeps the multiplied matrix in temp3(k*col)

                elementwise_devide_matrix(temp1, temp3, temp4, k, col);
                elementwise_multiply_matrix(matrix2, temp4, temp5, k, col);

                err= error(matrix , matrix1, temp5, row, k, col);

                copy_matrix(matrix2, temp5, k, col);

                //cout<<"----------------Changing mat-2----------------"<<endl;
            }
            else{
                transpose_matrix(matrix2, temp, k, col); //keeps the transpose matrix of matrix-1 in temp(col*k)
                multiply_matrix(matrix, temp, temp1, row, col, k); //keeps the multiplied matrix of temp & matrix in temp1(row*k)

                multiply_matrix(matrix2, temp, temp2, k, col, k); //keeps the multiplied matrix in temp2(k*k)
                multiply_matrix(matrix1, temp2, temp3, row, k, k); //keeps the multiplied matrix in temp3(row*k)

                elementwise_devide_matrix(temp1, temp3, temp4, row, k);
                elementwise_multiply_matrix(matrix1, temp4, temp5, row, k);


                err= error(matrix , matrix1, matrix2, row, k, col);

                copy_matrix(matrix1, temp5, row, k);

                //cout<<"----------------Changing mat-1----------------"<<endl;
            }

//            cout<<"ERROR: "<<err<<endl;
//            cout<<endl;
//            print_matrix(matrix1, row, k);
//            cout<<endl;
//            print_matrix(matrix2, k, row);
            cnt++;
        }
        else break;
    }

    cout<<endl;

    cout<<"--------------------------------------------------------------------------------------------------"<<endl<<endl;

    cout<<"Factorized matrices: "<<endl<<endl;

    cout<<"Matrix-1:"<<endl;
    print_matrix(matrix1, row, k);
    cout<<endl;

    cout<<"Matrix-2:"<<endl;
    print_matrix(matrix2, k, col);
    cout<<endl;

    cout<<"Total iterations: "<<cnt<<" "<<endl;
    cout<<"Error: "<<(err*100)<<"%"<<endl;
}
