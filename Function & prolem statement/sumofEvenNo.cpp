#include<iostream>
using namespace std;


int getEvenSum(int n){
    int sum =0;

    for(int i=2; i<=n; i=i+2){
        sum= sum + i;
    }
    return sum;
}


int main(){
    int n;
    cout<<"ENter the value of n "<< endl;
    cin>> n;

    int ans = getEvenSum(n);

    cout<< "Sum uptu " << n << " is "  << ans <<endl;
    return 0;
}