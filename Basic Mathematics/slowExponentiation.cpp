#include<iostream>
using namespace std;

int slowExponentiaiton(int a, int b) {
    int ans =1;
    for(int i=0; i< b; ++i) {
        ans*=a;
    }
    return ans;
}

int main() {
    cout<< slowExponentiaiton(5, 4) << endl;
    return 0;
}