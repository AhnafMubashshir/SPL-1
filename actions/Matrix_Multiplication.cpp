#include "header.h"

int Matrix_Multiplication()
{
    cout<<"#Multiplication of Chain Matrix"<<endl<<endl;
    int Hrow, Hcol, row1, col1, row2, col2, tot;
    string str, choice;

    cout<<"Enter number of matrices you want to multiply: ";
    cin>>str;
    if(str=="exit") return 0;
    else if(str=="back") return 1;
    tot= stoi(str);
    cout<<endl;

    if(tot>2){
        //dimension input
        cout<<"Enter the highest row and column in your chained matrix: ";
        cin>>str;
        if(str=="exit") return 0;
        else if(str=="back") return 1;
        Hrow= stoi(str);
        cin>>str;
        if(str=="exit") return 0;
        else if(str=="back") return 1;
        Hcol= stoi(str);
        cout<<endl;
    }


    double** matrix1=new double*[Hrow];
    for(int i=0; i<Hrow; i++) matrix1[i]= new double[Hcol];

    double** matrix2=new double*[Hrow];
    for(int i=0; i<Hrow; i++) matrix2[i]= new double[Hcol];

    double** result=new double*[Hrow];
    for(int i=0; i<Hrow; i++) result[i]= new double[Hcol];


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

    tot-=2;


    while(tot--){
        cout<<"Enter another matrix:"<<endl<<endl;

        cout<<"Is it in the front side of the result matrix or back side? Press 'f' for front side else Press 'b': ";

        while(1){
            cin>>choice;

            if(choice=="F" || choice=="f" || choice=="b" || choice=="B") break;
            if(str=="exit") return 0;
            else if(str=="back"){
                delete[] matrix1;
                delete[] matrix2;
                delete[] result;
                return 1;
            }
            else{
                cout<<"::Wrong input. Please try again: ";
                continue;
            }
            break;
        }
        cout<<endl;

        cout<<"The dimension of result matrix is: "<<row1<<"x"<<col2<<endl<<endl;

        if(choice=="F" || choice=="f"){
            row2=row1;
            copy_matrix(matrix2, result, row2, col2);

            while(1){
                //first mat dimension input
                cout<<"Enter other matrix row & column: ";
                cin>>str;
                if(str=="exit") return 0;
                else if(str=="back") return 1;
                row1= stoi(str);
                cin>>str;
                if(str=="exit") return 0;
                else if(str=="back") return 1;
                col1= stoi(str);
                cout<<endl;

                if(col1!=row2){
                    cout<<"::Wrong input (Column of 1st matrix and Row of 2nd matrix must have to be same)."<<endl<<endl;
                    continue;
                }

                break;
            }

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

            multiply_matrix(matrix1, matrix2, result, row1, col1, col2);
        }
        else{
            col1=col2;

            copy_matrix(matrix1, result, row1, col1);

            while(1){
                //first mat dimension input
                cout<<"Enter other matrix row & column: ";
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


            //Taking 1st matrix input
            cout<<"Enter 2nd matrix: "<<endl;
            for(int i=0; i<row2; i++){
                for(int j=0; j<col2; j++){
                    cin>>str;
                    if(str=="exit") return 0;
                    else if(str=="back") return 1;
                    matrix2[i][j]=stoi(str);
                }
            }
            cout<<endl;

            multiply_matrix(matrix1, matrix2, result, row1, col1, col2);
        }
    }

    cout<<"Result of the multiplied matrices: "<<endl;
    print_matrix(result, row1, col2);

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 2;
}
