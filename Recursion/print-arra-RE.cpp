#include<iostream>
using namespace std;

// void print(int arr[],  int n, int i) {
//     // base case
//     if(i >=n) {
//         return;
//     }

//     // 1 case solve krdia
//     cout << arr[i] <<" ";
//     // baaki recursion krdia
//     print(arr, n, i+1);
// }


//  OR
void print(int arr[],  int n) {
    // base case
    if(n ==0) {
        return;
    }

    // 1 case solve krdia
    cout << arr[0] <<" ";
    // baaki recursion krdia
    print(arr+1, n-1);
}

int  main() {
    int arr[5] = {10,20,30,40,50};
    int n =5;
    int i=0;
    // print(arr,n,i);
    print(arr, n);
}