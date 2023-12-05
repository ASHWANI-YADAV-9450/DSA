#include<iostream>
#include<algorithm> 
using namespace std;

int partition(int arr[], int s, int e) {
    // step1: choose pivoteelement
    int pivoteIndex =s;
    int pivoteElement = arr[s];

    //step2: find right position for pivote Element ans place it there
    int count= 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivoteElement) {
            count++;
        }
    }

    // jab main loop se bahr hua , toh mere pass pivote ki right
    // position ka index ready h

    int rightIndex = s + count;
  swap(arr[pivoteIndex], arr[rightIndex]);
pivoteIndex = rightIndex;


    // step3:
    int i=s;
    int j = e;

    while( i < pivoteIndex && j > pivoteIndex) {
        while(arr[i] <= pivoteElement) {
            i++;
        }
        while(arr[j] > pivoteElement) {
            j--;
        }

        // 2 case ho sakta h --->
        // A-> you found the element to swap
        // B-> no need to swap
        if( i < pivoteIndex && j > pivoteIndex )
        swap(arr[i], arr[j]);
    }
    return pivoteIndex;


}


void quickSort(int arr[], int s, int e) {
    // base case
    if(s >= e)
    return;


    // partition logic, return pivoteIndex
    int p = partition(arr, s, e);

    // recusrsive calls
    // pivote element -> left
    quickSort(arr, s, p-1);

    // pivote element -> right
    quickSort(arr, p+1, e);

}

int main() {
    int arr[] = {8,1,33,3,3,3,3,3,3,3,3,4,4,4,4,8,41,1,11,1,1 ,4,20,50,30};
    int n =24;


    int s =0;
    int e = n-1;
    quickSort(arr, s, e);
 
    for(int i=0; i<n; i++ ) {
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}