#include<iostream>
using namespace std;

int increment(int **p) {
    (**p)++; // This should increment the value pointed to by p, but it won't affect num directly.
}

int main(){
    int num = 10;
    int *ptr = &num;
    increment(&ptr); // You're passing a pointer to a pointer here.
    cout << num << endl; // You're expecting num to be incremented, but it won't be.
    return 0;
}