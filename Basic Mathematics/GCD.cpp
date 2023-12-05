#include<iostream>
using namespace std;

int gcd(int A, int B) {
    if(A == 0) return B;
    if(B == 0) return A;

    while(A>0 && B>0) {
        if(A>B) {
            A = A-B;
        } else {
            B= B-A;
        }
    }
    return A; 
}

int main() {
    int a =3;
    int b =6;
    
    int answ = gcd(a,b);

    cout<<"ans: " <<answ<<endl;
}