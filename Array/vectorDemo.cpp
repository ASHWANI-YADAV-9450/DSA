#include<iostream>
#include<vector>
using namespace std;


int main(){

    //create  vector
    vector<int> arr;


    // int ans = (sizeof(arr)/sizeof(int));
    // cout<< ans << endl;

    // cout<< arr.size() << endl;
    // cout<< arr.capacity() << endl;

    // Insert
    arr.push_back(5);
    arr.push_back(3);

    //print 
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;

    // remove
    arr.pop_back();
    //print 
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;


    int n;
    cout<< "Enter thevalue of n"<<endl;
    
    cin>> n;
    vector<int> brr(n, -101);
    cout<<"Size of b "<< brr.size() <<endl;

    for(int i=0; i<brr.size(); i++){
        cout<< brr[i] <<" ";
    }
    cout<< endl;

    cout<<" Printing crr" << endl;
    vector<int> crr{10,20,30,50};

     for(int i=0; i<crr.size(); i++){
        cout<< crr[i] <<" ";
    }
    cout<< endl;

    return 0;
}