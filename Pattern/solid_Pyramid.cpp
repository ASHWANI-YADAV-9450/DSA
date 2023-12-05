#include<iostream>
using namespace std;


int main(){
     int n;
    cout<<"ENter the number"<<endl;
    cin >> n;

    // Half Upper Part
    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<n-row-1; col ++){
            cout<<" ";
        }

        // star
        for(int col=0; col< row+1; col=col +1){
            cout<<"* ";
        }
        cout<<endl;
    }

// Half Lower PArt
  for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }

        // stars
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}