#include<iostream>
using namespace std;

void solve(int arr[]) { // yha pr pointer pass hota hai array nhi, usi ko pass by reference bolte hai
    cout <<"Size inside solve function " << sizeof(arr) <<endl;
}

int main() {
    // int a = 5;
    // int b = 5;

    // cout << a<<endl;
    // cout<<"address: " << &a <<endl;
    //  cout<<"address: " << &b <<endl;

    // int a =5;
    // //pointer create
    // int* ptr = &a;

    // // access the vslue ptr is pointing to
    // cout << "Address of a is: " << &a << endl;
    // cout<< "value stored at ptr is: " << ptr <<endl;
    // cout<<" value ptr is pointing to is: " << *ptr <<endl;
    // cout<< &ptr << endl;
    ////////

    // int a =5;
    // int* p = &a;

    // cout << sizeof(p) << endl;

    // char ch = 'b';
    // char* c = &ch;

    // cout << sizeof(c) <<endl;

    // double dtr = 5.03;
    // double* d = &dtr;

    // cout << sizeof(d) << endl;


    ///
    // Null pointer
    // int* ptr =0;

    // cout << *ptr <<endl;

    /////

    // int a = 5;

    // int* ptr = &a;

    // //copy pointer

    // int* dusraPtr = ptr;

    // cout << *ptr << endl;
    // cout << *dusraPtr << endl;




////

// int arr[4] = {12,44,66,18};

// cout << arr << endl;
// cout<< arr[0] <<endl;
// cout << &arr << endl;
// cout << &arr[0] << endl;


// int *p = arr;
// cout << p << endl;
// cout << &p << endl;

// cout << *arr << endl;
// cout << arr[0] << endl;
// cout << *arr + 1 << endl;
// cout << *(arr) + 1 << endl;
// cout << *(arr + 1) << endl;
// cout << arr[2] << endl;
// cout << *(arr + 2) << endl;
// cout << *(arr + 3) << endl;
// cout << arr[3] << endl;


// int i=0;
// cout << arr[i] << endl;
// cout << i[arr] << endl;
// cout << *(arr + i) << endl;
// cout << *(i + arr) << endl;


// int *p = arr;
// p = p + 2;

// cout << p << endl;


// int arr[10];

// cout << sizeof(arr) << endl;

// int* p = arr;
// cout << sizeof(p) << endl; 

////

// char ch[10] = "Lucky";
// char* c = ch;

// cout << ch << endl;
// cout << &ch << endl;
// cout << ch[0] << endl;


// cout << &c << endl;
// cout << *c << endl;
// cout << c << endl;

///

int arr[10] = {1,2,3,4};
cout << "Size inside main function. " << sizeof(arr)<< endl;

solve(arr);




return 0;
}