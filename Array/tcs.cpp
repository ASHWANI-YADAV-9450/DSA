#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    int R1= 2;
    int R2 = 5;
    int count =0;

    for(int i=0; i<size; i++){
       
        if( arr[i]>=R1 && arr[i]<=R2){
            count++;
        }
    }
    cout<<"Range from 2 to 5: "<<count;
}