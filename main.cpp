#include "header.h"
using namespace std;

int main()
{
    double matrix[N][N]={};
    int row,col,colrow,i,j;

    //Taking input
    cout<<"Enter matrix row & column: ";
    cin>>row>>col;
    cout<<endl;

    cout<<"Enter the matrix: "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++) cin>>matrix[i][j];
    }
    cout<<endl;

    cout<<"Enter new matrix row & column: ";
    cin>>colrow;
    cout<<endl;

    double matrix1[N][N]={}, matrix2[N][N]={};

    cout<<determenent(matrix, col)<<endl<<endl;

    //normalizing initial matrix
    matrix_normalizer(matrix, row, col);


    //initializing first factorized matrix with gaussian distribution
    gaussian_initializer(matrix1, row, colrow);
//    hadamard(matrix1, row, colrow, colrow);
//    hadamard(matrix2, colrow, col, colrow);

    //initializing second factorized matrix with gaussian distribution
    gaussian_initializer(matrix2, colrow, col);



    multiplicative_update(matrix, matrix1, matrix2, row, col, colrow);

    //print_matrix(matrix, row, col);
}


