#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3], int rows, int cols) {
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++) {
            if(arr[i][j] > maxi) {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getMin(int arr[][3], int rows, int cols) {
    int mini = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++) {
            if(arr[i][j] < mini) {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

bool findkey(int arr[][3], int rows, int cols, int key) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(arr[i][j] == key)
            return true;
        }
    }

    // value is not present
    return false;
}

void printRowWiseSum(int arr[][3], int rows, int cols) {
     // row sum
     cout << "Printing in row-wise sum" << endl;
     for(int i=0; i<rows; i++){
        int sum =0;
        for(int j=0; j<cols; j++) {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
     }
}

int main(){
    int arr[3][3];
    int rows=3;
    int cols =3;


    //row wise input
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "printitng row wise " <<endl;

    for(int i=0; i< rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }


//     // printRowWiseSum(arr, rows,cols);
//    int key = 7;
//     cout << findkey(arr, 3,3,key);

cout << "Max Number: " << getMax(arr, rows, cols) << endl;

cout << "Min Number: " << getMin(arr, rows, cols) << endl;

    return 0;
}