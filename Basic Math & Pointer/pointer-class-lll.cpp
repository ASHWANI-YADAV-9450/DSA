#include<iostream>
using namespace std;

void util(int* p) // pass by value
{
    // p = p+1;
   *p =*p+1;
}

int main() {

    // Double pointer
    // int a = 5;
    // int* p = &a;

    // int** q = &p;

    // cout << &a << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;
    // cout << q << endl;
    // cout << &q << endl;
    // cout << *q << endl;
    // cout << **q << endl;
    

    ////


    int a = 5;

    int* p = &a;

    cout <<endl << "before" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    util(p);

    cout << "after" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
}