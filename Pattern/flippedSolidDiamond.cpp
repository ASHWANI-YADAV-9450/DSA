#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"ENter the number"<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        // half pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }


        // space wlla full pyramid
        for(int col=0; col<2*row+1; col++){
            cout<<" ";
        }


        // half pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int row=0; row<n; row++){
             // ANother half

    // half pyramid
    for(int col=0; col<row +1; col++){
        cout<<"*";
    }
    // space wala full pyramid
    for(int col=0; col<2*n -2*row-1; col++){
        cout<<" ";
    }

    // half pyramid
    for(int col=0; col<row+1; col++){
        cout<<"*";
    }

    cout<<endl;
    }
}