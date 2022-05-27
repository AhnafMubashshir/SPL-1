#include "header.h"

int Determinant()
{
    cout<<"#Determinant"<<endl<<endl;
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


    //Taking matrix input
    double** matrix=new double*[row];
    for(int i=0; i<row; i++) matrix[i]= new double[col];

    cout<<"Enter matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>str;
            if(str=="exit") return 0;
            else if(str=="back") return 1;
            matrix[i][j]=stoi(str);
        }
    }
    cout<<endl;

    double det;
    det= determenent(matrix, row, col);

    cout<<"The determinant is: "<<det<<endl;

    delete[] matrix;

    return 2;
}
