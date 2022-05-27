#include "header.h"

int Matrix_Addition(){
    cout<<"#Matrix Addition"<<endl<<endl;

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
    double** matrix1=new double*[row];
    for(int i=0; i<row; i++) matrix1[i]= new double[col];

    cout<<"Enter 1st matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>str;
            if(str=="exit") return 0;
            else if(str=="back") return 1;
            matrix1[i][j]=stoi(str);
        }
    }
    cout<<endl;



    //Takin 2nd matrix input
    double** matrix2=new double*[row];
    for(int i=0; i<row; i++) matrix2[i]= new double[col];

    cout<<"Enter 2nd matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>str;
            if(str=="exit") return 0;
            else if(str=="back") return 1;
            matrix2[i][j]=stoi(str);
        }
    }
    cout<<endl;


    double** result=new double*[row];
    for(int i=0; i<row; i++) result[i]= new double[col];

    add_matrix(matrix1, matrix2, result, row, col);

    cout<<"The added matrix is: "<<endl;
    print_matrix(result, row, col);

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 2;
}
