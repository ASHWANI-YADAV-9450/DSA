#include<iostream>
#include<vector>
using namespace std;

long countInversion(vector<int> arr) {
    int count =0;
    for(int i=0; i<arr.size(); i++) {
        for(int j = i+1; j < arr.size();  j++) {
            count = arr[i] > arr[j] ? count + 1 : count;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {2, 1, 3, 1, 2};
    long ans = countInversion(arr);
    cout << "ans: " << ans << endl;
}