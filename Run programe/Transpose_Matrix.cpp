#include "header.h"

void Transpose_Matrix()
{
    cout<<"#Transpose Matrix"<<endl<<endl;
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


    double** T_matrix=new double*[col];
    for(int i=0; i<col; i++) T_matrix[i]= new double[row];

    transpose_matrix(matrix, T_matrix, row, col);

    cout<<"The Transposed matrix is: "<<endl;
    print_matrix(T_matrix, col, row);

    delete[] matrix;
    delete[] T_matrix;
}
