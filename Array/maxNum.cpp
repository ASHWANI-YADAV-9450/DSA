#include<iostream>
#include  <limits.h>
using namespace std;

int main(){

    int arr[5] = {4,6,98,7,85};
    int size =5;


    //initialise the mazi variable with the 
    // minimum possible value 
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout<< "maximum number is "<< maxi << endl;

    return 0;

}