#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {5,8,4,1,2};
    int n = arr.size();
   sort(arr, arr + n);

   for(int i=0; i<n; i++){
    cout<< arr[i]<<endl;
   }

}