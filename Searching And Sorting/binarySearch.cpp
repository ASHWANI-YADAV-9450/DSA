#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start =0;
    int end = size -1;

    int mid = start + (end - start) / 2 ;

    while(start <= end) {
        int element = arr[mid];

        if(element == target) {
            return mid;
        }
        else if(target < element) {
            // search in left
            end = mid - 1;
        }
        else {
            // search in right
            start = mid + 1;
        }

        mid = start + (end - start) / 2 ;
    }
    // element not found
    return -1;
}

int main(){
    // int arr[] = {2,4,6,8,10,12,14};
    // int size = 7;
    // int target = 10;

    // int indexOftarget = binarySearch(arr, size, target);


    // if(indexOftarget == -1) {
    //     cout<< " target not found" << endl;
    // }
    // else {
    //     cout<< "target found at "<< indexOftarget << endl;
    // }

    vector<int> v{1,2,3,4,5,6};
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

     if(binary_search(arr, arr + size, 7)){
        cout<< " Found" << endl;
    }
    else {
        cout << " Not found" <<endl;
    }

    // if(binary_search(v.begin(), v.end(), 31)){
    //     cout<< " Found" << endl;
    // }
    // else {
    //     cout << " Not found" <<endl;
    // }





    return 0;
}