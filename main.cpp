#include "header.h"
using namespace std;

int main()
{
    string ch;

    cout<<"Options: "<<endl;
    cout<<"Press '1' for Matrix Addition"<<endl;
    cout<<"Press '2' for Matrix Subtraction."<<endl;
    cout<<"Press '3' for Matrix Multiplication."<<endl;
    cout<<"Press '4' for Inverse Matrix."<<endl;
    cout<<"Press '5' for Transpose Matrix"<<endl;
    cout<<"Press '6' for Determinant of Matrix."<<endl;
    cout<<"Press '7' for Matrix Factorization."<<endl;
    cout<<"Press '8' for Linear Equation Solving."<<endl;
    cout<<"Type 'exit' to terminate."<<endl;
    cout<<endl;

    while(1){
        cout<<"Choose an option or type 'exit' to terminate: ";
        cin>>ch;
        cout<<endl;

        if(ch=="exit") break;

        if(ch=="1") Matrix_Addition();
        else if(ch=="2") Matrix_Subtraction();
        else if(ch=="3") Matrix_Multiplication();
        else if(ch=="4") Inverse_Matrix();
        else if(ch=="5") Transpose_Matrix();
        else if(ch=="6") Determinant();
        else if(ch=="7") Matrix_Factorization();
        else if(ch=="8") Solve_Linear_Equation();

        cout<<endl;

        cout<<"Do you wish to continue? press 'Y' for Yes | 'N' for No | 'exit' to terminate: ";
        while(1){
            cin>>ch;
            if(ch=="N" || ch=="Y" || ch=="n" || ch=="y" || ch=="exit") break;
            else cout<<"Wrong choice! Please try again: ";
        }
        cout<<endl<<endl;
        if(ch=="n" || ch=="N") break;
        else if(ch=="exit") break;
    }
    cout<<endl<<"--------------------------------------------------Thank You!--------------------------------------------------"<<endl<<endl;
}
