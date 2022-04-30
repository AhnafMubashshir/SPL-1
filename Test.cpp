#include <bits/stdc++.h>
using namespace std;

// `M × N` matrix
#define M 4
#define N 5

// Dynamic Memory Allocation in C++ for 2D Array
int main()
{
    int n;

//    Number of equation
    cin>>n;

    double eqn[n+1][n+1], eqn_equal[n+1];

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            cin>>eqn[i][j];
        }
        cin>>eqn_equal[i];
    }

    double new_val[n+1]={}, old_val[n+1]={}, error[n+1];

    while(1){
        for(int i=1; i<n+1; i++){
            old_val[i]= new_val[i];
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<n+1; j++){
                if(j!=i) new_val[i]= eqn_equal[i]-(eqn[i][j]*new_val[j]);
            }
            new_val[i]/=eqn[i][i];
        }
        for(int i=1; i<n+1; i++) cout<<new_val[i]<<" ";
        cout<<endl;

        for(int i=1; i<n+1; i++){
            error[i]= abs(new_val[i]-old_val[i])/new_val[i];
            error[i]*=100;
        }

        if(*max_element(error, error+n+1)<=1) break;
    }

    for(int i=1; i<n+1; i++){
        cout<<new_val[i]<<" ";
    }

    return 0;
}
