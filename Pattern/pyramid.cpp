#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter the number"<<endl;
    cin >> n;

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
}


// 1st Method

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int k=0;
//         for(int j=0;  j<((2*n) - 1); j++){
//             if(j< n-i-1){
//                 cout<<" ";
//             }else if(k < 2 * i +1){
//                 cout<<"*";
//                 k++;
//             }else{
//                 cout<< " ";
//             }
//         }
//         cout<< endl;
//     }
// }