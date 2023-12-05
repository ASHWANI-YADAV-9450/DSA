#include<iostream>
using namespace std;

// variable scoping
int  main(){
    // variable scoping
    int a;
    // initialisation
    int b = 5;
    // updation
    b =10;

    if(true){
        int b = 15;
    }
}

// int main(){
//     int a =2; 
//     cout<<(++a) * (--a) * (++a);
// }


// //  Left shift by 1 is multiple of NUmber
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//    int x = n<<1;
//     cout<<x;
// }