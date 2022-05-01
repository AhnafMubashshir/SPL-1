#include <bits/stdc++.h>
using namespace std;

// `M × N` matrix
#define M 4
#define N 5

// Dynamic Memory Allocation in C++ for 2D Array
int main()
{
    int n, cnt=0;

//    Number of equation
    cin>>n;

    double eqn[n+1][n+1], eqn_equal[n+1], temp[n+1];
    double old_error=101, new_error;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            cin>>eqn[i][j];
        }
        cin>>eqn_equal[i];
    }

    double new_val[n+1]={}, old_val[n+1]={}, error[n+1];

    while(1){
        old_error=new_error;

        for(int i=1; i<n+1; i++){
            old_val[i]= new_val[i];
        }

        for(int i=1; i<n+1; i++){
            temp[i]=eqn_equal[i];
            for(int j=1; j<n+1; j++){
                if(j!=i){
                    temp[i]-= (eqn[i][j]*new_val[j]);
                    new_val[i]=temp[i];
//                    cout<<"x"<<i<<"= "<<temp[i]<<"-"<<"("<<eqn[i][j]<<"*"<<new_val[j]<<")= "<<new_val[i]<<endl;
                }
            }
            new_val[i]/=eqn[i][i];
        }

        for(int i=1; i<n+1; i++){
            error[i]= abs(new_val[i]-old_val[i]) / abs(new_val[i]);
            error[i]*=100;
        }

        new_error= *max_element(error, error+n+1);

//        cout<<"Old error: "<<old_error<<" & new error= "<<new_error<<" same erro count= "<<cnt<<endl;
        printf("Old error: %0.25lf, New error: %0.25lf, same error count: %d\n", old_error, new_error, cnt);

        if( abs(old_error-new_error)<0.01 ) cnt++;
        else cnt=0;

//        else if(new_error>old_error) break;
        if(cnt>4) break;
        else if(*max_element(error, error+n+1)<=5) break;
    }

    for(int i=1; i<n+1; i++){
        cout<<new_val[i]<<" ";
    }
    cout<<endl;

    return 0;
}
