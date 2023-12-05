#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=0; i<2*n-1; i++){
        // int cond =0;
        // if(i<n){    // growing phase of diamond
        //     cond =i;
        // } 
        // else{
        //     cond = n- (i%n) - 2;
        // }

    //or

    int cond = i< n ? i : n -(i%n) -2;

        for(int j=0; j<=cond; j++){
            cout<<"*";
        }
          cout<<endl;
    }
}





// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;

//     for(int row=0; row<n; row++){
//         for(int col=0; col<=row; col++ ){
//             cout<<"*";
//         }
//         cout<<endl;

       
//     }

//     for(int row=0; row<n; row++){
//          // another half
//         for(int col=1; col<=n-row-1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }