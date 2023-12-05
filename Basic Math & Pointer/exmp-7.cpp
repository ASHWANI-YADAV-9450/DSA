#include<iostream>
using namespace std;

void func(int a[] ) {
    cout << a[0] <<" ";
}

int main() {
    int a[] = {1,2,3,4};
    func(a + 1);
    cout << a[0];
}