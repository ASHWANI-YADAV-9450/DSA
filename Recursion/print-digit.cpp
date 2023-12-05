#include<iostream>
using namespace std;

void printDigits(int n ) {
    // base case
    if(n ==0) {
        return ;
    }

    int newValueofNum = n/10;
    // baki recursion smabhal lega
    printDigits(newValueofNum);

    // 1 case main solve karunga
    int digit = n%10;
    cout << digit <<" ";
}

int main() {
    int n =647;

    printDigits(n);
}