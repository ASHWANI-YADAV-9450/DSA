#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,1,7,6,14,9};   
    int n = arr.size();


    // Inserton sort
    for(int round =1; round <n; round++) {
        // Step A - fetch
        int val = arr[round];
        // Step B - Compare
        int j=round-1;
        for(; j>=0; j--) {
            if(arr[j] > val) {
                // Step C: shift
                arr[j+1] = arr[j];
            }
            else {
                // rukna hai 
                break;
            }
        }
        // Step D: Copy
        arr[j+1] = val;
    }

    //printing 
    for(int i=0; i<n; i++) {
        cout<< arr[i] <<" ";
    }
    cout<< endl;
}