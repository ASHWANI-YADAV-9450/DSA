#include<iostream>
using namespace std;


int main(){

// //declare 2D array
//     int arr[3][3];


//     // initilization

//     int brr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {2,4,8} };
        

//         // row-wise print
//         // outer loop
//         for(int i=0; i<3; i++){
//             //for every row we, need to print value in each column 
//             for(int j=0; j<3; j++) {
//                 cout << brr[i][j] <<" ";
//             }
//             cout << endl;
//         }
// cout << " printitng column wise" << endl;
//         // column-wise print
//            for(int i=0; i<3; i++){
//             //for every row we, need to print value in each column 
//             for(int j=0; j<3; j++) {
//                 cout << brr[j][i] <<" ";
//             }
//             cout << endl;
//         }

////////////////////
int arr[3][3];
int rows =3;
int cols =3;

//input
   
//    // row wise input
//    for(int i=0; i<rows; i++) {
//     for(int j=0; j<cols; j++) {
//         cin>> arr[i][j];
//     }
//    }

//     cout << "printing row wise" << endl;
//    for(int i=0; i<rows; i++) {
//     for(int j=0; j<cols; j++) {
//         cout<< arr[i][j] <<" ";
//     }
//     cout<< endl;
//    }

////
   // column wise input
   for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
        cin>> arr[j][i];
    }
   }

    cout << "printing column wise" << endl;
   for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
        cout<< arr[i][j] <<" ";
    }
    cout<< endl;
   }

}