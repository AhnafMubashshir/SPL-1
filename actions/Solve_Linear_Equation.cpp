#include"header.h"

void Solve_Linear_Equation(){

    cout<<"#Linear equation solving"<<endl<<endl;

    int variables;

    cout<<"Enter number of variables: ";
	cin>>variables;
	cout<<endl;

	double** co_efficient_mat=new double*[variables];
    for(int i=0; i<variables; i++) co_efficient_mat[i]= new double[variables];

    double* right_hand_side_mat=new double[variables];

	cout<<"Enter the coefficients row-wise: "<<endl;
	for(int i=0;i<variables;i++){
		for(int j=0;j<variables;j++){
			cin>>co_efficient_mat[i][j];
		}
	}
	cout<<endl;

	cout<<"Enter right-hand-side values: ";
	for(int i=0;i<variables;i++) cin>>right_hand_side_mat[i];
	cout<<endl;

	gauss_seidel(co_efficient_mat, right_hand_side_mat, variables);

	delete[] co_efficient_mat;
	delete[] right_hand_side_mat;
}
