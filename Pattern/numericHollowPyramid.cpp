#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;


    for(int row=0; row<n; row++){
        //space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // Number with spaces in between 
        int start =1;
        for(int col=0; col<2*row +1; col++){
            // first row or last row 
        if( row == 0 || row == n-1 ){
            if( col % 2 == 0){
                // even 
                cout<< start;
                start++;
            } else{
                // odd
                cout<<" ";
            }
        } else{
           // first col
           if(col == 0){
            cout<< 1;
           } else if(col == 2*row+1-1){
            cout<< row+1;
           }else{
            cout<<" ";
           }
        }
       
    }
     cout<<endl;
}}