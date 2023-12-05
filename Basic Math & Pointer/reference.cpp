#include<iostream>
using namespace std;

int main() {
    int a =5;
    int& b = a;

    cout << a << endl;
    cout << b << endl;
cout<<endl;
    a++;
    cout << a << endl;
    cout << b << endl;

    b++;

cout<<endl;

    cout << a << endl;
    cout << b << endl;
}