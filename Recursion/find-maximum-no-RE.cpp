#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi) {
    // base case
    if( i>=n) {
        // array agr khtm hogya, poora traverse hogya
        // toh wapas aajaaoo
        return;
    }

    // 1 case solve krna h
    // current element ko check karo for max 
    if(arr[i] > maxi) {
        maxi = arr[i];
    }

    //baki recursion karega
    findMax(arr, n, i+1, maxi);
}


void findMini(int arr[], int n, int i, int& mini) {
    // base case 
    if( i >=n) {
        return;
    }
    // 1 case solve krna padega
    mini = min(mini, arr[i]);


    // baki recursion sambhal lega
    findMini(arr, n, i + 1, mini);
} 

int main() {
    int arr[] = {10,30,21,44,6,32,17,19,66};
    int n=8;

    int maxi = INT16_MIN;
    int mini = INT16_MAX;
    int i=0;

    findMax(arr, n,i,maxi);
    findMini(arr, n, i, mini);

    cout <<"maximum number is: " << maxi<<endl;
      cout <<"minimum number is: " << mini <<endl;
}