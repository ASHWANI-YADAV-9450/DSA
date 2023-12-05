#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // star/ number
        for(int col=0; col<row+1; col++){
            cout<<col+row+1;
        }
        // Reversing counting

            // M-1
        // for(int col=row; col>=1; col--){
        //     cout<< col+row;
        // }

        //  M-2
        int start = 2*row;
        for(int col=0; col< row; col++){
            cout<< start;
            start--;
        }

        
        cout<<endl;
    }

}