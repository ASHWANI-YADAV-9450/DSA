#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please Enter the number"<<endl;
    cin>>n;

    // holow diamond
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // Star
       for(int col=0; col<2*row+1; col++){
        // if first character or last charatwer
        if(col == 0 || col ==2*row){
            // first charater or last character
            cout<<"*";
        } else{
            cout<<" ";
        }
       }
       cout<< endl;
    }

    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<row; col++){
            cout<<" ";
        }

        // star 
        for(int col=0; col<2*n-2*row-1; col++){
            //if first l or last character
            if(col == 0 || col == 2*n - 2*row-2){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}