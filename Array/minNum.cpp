#include<iostream>
#include<limits.h>
using namespace std;


int main(){

    int arr [5] = {3,5,2,65,7};
    int size = 5;
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
    if(arr[i] < mini){
        mini = arr [i];
    }
    }

    cout<< "minimum number is" << mini<< endl;
    return 0;
}