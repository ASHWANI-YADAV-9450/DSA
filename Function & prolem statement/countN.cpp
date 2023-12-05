#include<iostream>
using namespace std;

void countNumber(int n){
    for(int i=1; i<=n; i++){
        cout<< i << " ";
    }
   cout<< endl;
}


int main(){
    int n;
    cout<<"Enter the number "<< endl;
    cin>>n;
 countNumber(n);
}