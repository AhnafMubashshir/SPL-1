#include "header.h"

int Matrix_Multiplication()
{
    cout<<"#Matrix Multiplication"<<endl<<endl;

    int row1,col1,row2,col2;
    string choice, str;


    while(1){
        //first mat dimension input
        cout<<"Enter 1st matrix row & column: ";
        cin>>str;
        if(str=="exit") return 0;
        else if(str=="back") return 1;
        row1= stoi(str);
        cin>>str;
        if(str=="exit") return 0;
        else if(str=="back") return 1;
        col1= stoi(str);
        cout<<endl;

        //second mat dimension input
        cout<<"Enter 2nd matrix row & column: ";
        cin>>str;
        if(str=="exit") return 0;
        else if(str=="back") return 1;
        row2= stoi(str);
        cin>>str;
        if(str=="exit") return 0;
        else if(str=="back") return 1;
        col2= stoi(str);
        cout<<endl;

        if(col1!=row2){
            cout<<"::Wrong input (Column of 1st matrix and Row of 2nd matrix must have to be same)."<<endl<<endl;
            continue;
        }

        break;
    }

    double** matrix1=new double*[row1];
    for(int i=0; i<row1; i++) matrix1[i]= new double[col1];

    double** matrix2=new double*[row2];
    for(int i=0; i<row2; i++) matrix2[i]= new double[col2];


    double** result=new double*[row1];
    for(int i=0; i<row1; i++) result[i]= new double[col2];


    //Taking 1st matrix input
    cout<<"Enter 1st matrix: "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cin>>str;
            if(str=="exit") return 0;
            else if(str=="back") return 1;
            matrix1[i][j]=stoi(str);
        }
    }
    cout<<endl;



    //Takin 2nd matrix input
    cout<<"Enter 2nd matrix: "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>str;
            if(str=="exit") return 0;
            else if(str=="back") return 1;
            matrix2[i][j]=stoi(str);
        }
    }
    cout<<endl;


    multiply_matrix(matrix1, matrix2, result, row1, col1, col2);
    cout<<"Result of the multiplied matrices: "<<endl;
    print_matrix(result, row1, col2);

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 2;
}
