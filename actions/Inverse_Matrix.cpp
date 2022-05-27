#include "header.h"

int Inverse_Matrix()
{
    cout<<"#Inverse Matrix"<<endl<<endl;
    int row, col;
    string str;

    //dimension input
    cout<<"Enter row & column of the matrix: ";
    cin>>str;
    if(str=="exit") return 0;
    else if(str=="back") return 1;
    row= stoi(str);
    cin>>str;
    if(str=="exit") return 0;
    else if(str=="back") return 1;
    col= stoi(str);
    cout<<endl;


    //Taking 1st matrix input
    double** matrix=new double*[row];
    for(int i=0; i<row; i++) matrix[i]= new double[col];

    cout<<"Enter The matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>str;
            if(str=="exit") return 0;
            else if(str=="back") return 1;
            matrix[i][j]=stoi(str);
        }
    }
    cout<<endl;

    double** result=new double*[col];
    for(int i=0; i<col; i++) result[i]= new double[row];

    double det= inverse_matrix(matrix, result, row, col);
    if(det==0){
        cout<<"::Could not find Inverse. (determinant is 0)."<<endl<<endl;
        return 1;
    }

    cout<<"The Inverse Matrix is: "<<endl;

    print_matrix(result, col, row);

    delete[] matrix;
    delete[] result;

    return 2;
}
