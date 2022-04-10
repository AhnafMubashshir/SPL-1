#include "header.h"

void Inverse_Matrix()
{
    cout<<"#Inverse Matrix"<<endl<<endl;
    int row, col;

    cout<<"Enter row & column of the matrix: ";
    cin>>row>>col;
    cout<<endl;


    //Taking 1st matrix input
    double** matrix=new double*[row];
    for(int i=0; i<row; i++) matrix[i]= new double[col];

    cout<<"Enter The matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    double** result=new double*[col];
    for(int i=0; i<col; i++) result[i]= new double[row];

    double det= inverse_matrix(matrix, result, row, col);
    if(det==0){
        cout<<"::Could not find Inverse. (determinant is 0)."<<endl<<endl;
        return;
    }

    cout<<"The Inverse Matrix is: "<<endl;

    print_matrix(result, col, row);

    delete[] matrix;
    delete[] result;
}
