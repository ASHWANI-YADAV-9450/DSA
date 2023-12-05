#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,1,1,0,0,0,1,0,1,0,1,1,0};

    int size = 15;

    int numZero =0; 
    int numOne =1;

    for(int i=0; i<size; i++){
        // if zeros found,increament numZero
        if(arr[i] == 0){
            numZero++;
        }
        // if One Found, increment numOne
        if(arr[i] == 1){
            numOne++;
        }
    }

    cout<<"number of zeros"<< numZero <<endl;
    cout<<" number of Ones" <<numOne << endl; 
}