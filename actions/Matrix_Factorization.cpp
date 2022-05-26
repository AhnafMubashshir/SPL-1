#include "header.h"

void Matrix_Factorization()
{
    cout<<"#Matrix Factorization"<<endl<<endl;

    int row,col,colrow,i,j;
    int range;

    //Taking input
    cout<<"Enter matrix row & column: ";
    cin>>row>>col;
    cout<<endl;

    double** matrix=new double*[row];
    for(int i=0; i<row; i++) matrix[i]= new double[col];

//    cout<<"Enter the matrix: "<<endl;
//    for(i=0;i<row;i++){
//        for(j=0;j<col;j++) cin>>matrix[i][j];
//    }
//    cout<<endl;


    cout<<"Enter new matrix row & column: ";
    cin>>colrow;
    cout<<endl;

    cout<<"Enter the last range of your input: ";
    cin>>range;
    cout<<endl;

    double** matrix1=new double*[row];
    double** matrix2=new double*[colrow];

    for(int i=0; i<row; i++) matrix1[i]= new double[colrow];
    for(int i=0; i<colrow; i++) matrix2[i]= new double[col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            double input= rand()%range;
            matrix[i][j]= abs(input);
//            cout<<matrix[i][j]<<" "<<i<<" "<<j<<endl;
        }
    }

//    print_matrix(matrix, row, col);

    //cout<<determenent(matrix, row, col)<<endl<<endl;

    //normalizing initial matrix
    matrix_normalizer(matrix, row, col);

    cout<<"Random matrix created. "<<endl;
//    cout<<"Normalized matirx: "<<endl;
//    print_matrix(matrix, row, col);


    //initializing first factorized matrix with gaussian distribution
//    gaussian_initializer(matrix1, row, colrow);
    hadamard(matrix1, row, colrow);
    make_abs_mat(matrix1, row, colrow);
    cout<<"Matrix 1 is created."<<endl;
//    print_matrix(matrix1, row, colrow);


    //initializing second factorized matrix with gaussian distribution
//    gaussian_initializer(matrix2, colrow, col);
    hadamard(matrix2, colrow, col);
    make_abs_mat(matrix2, colrow, col);
    cout<<"Matrix 2 is created."<<endl;
//    print_matrix(matrix2, colrow, col);

//    cout<<col<<endl;


    //Multiplicative update for factorizing
    multiplicative_update(matrix, matrix1, matrix2, row, col, colrow);

    delete[] matrix;
    delete[] matrix1;
    delete[] matrix2;
}
