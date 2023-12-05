#include<iostream>
using namespace std;

int main(){
    // int arr[10];
    // cout<<"Enter the number"<<endl;

    // for(int i=0; i<10; i++){
    // cin>> arr[i];
    // }
    // cout<<"printtig the values"<< endl;

    // for(int i=0; i<10; i++){
    //     cout<< arr[i] <<" ";
    // }

    /////////////
    int arr[500];
    int n;
    cout<<"How many number you want add in array"<< endl;

    cin>> n;
    cout<< "Enter the number" << endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }


    // double
    for(int i=0; i<n; i++){
        cout<< 2 * arr[i] <<" ";
    }
}