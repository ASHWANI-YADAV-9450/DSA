#include<iostream>
using namespace std;

void printCounting(int n) {
    // base case 
    if(n == 0) {
        return;
    }

    // processing
    // cout << n << " ";  // here it will print in decreasing order

    printCounting(n-1);


     cout << n << " ";  // here it will print in increasing order
}

int main() {
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    printCounting(n);
}