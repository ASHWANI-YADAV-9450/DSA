#include<iostream>
#include<vector>
using namespace std;

int countArrangementHelper(vector<int>&v, int&n, int&ans, int currNum) {
    // base
    if(currNum == n + 1) {
        ++ans;
        return 0;
    }

    for(int i=1; i<=n; ++i) {
        if(v[i] == 0 && (currNum % i == 0 || i % currNum == 0)) {
            v[i] = currNum;
            countArrangementHelper(v, n, ans, currNum + 1);
            v[i] = 0; // backtracking
        }
    }
}

int main() {
    int  n= 2;
    vector<int>v(n+1);
    int ans =0;
  int ans1 =  countArrangementHelper(v, n, ans, 1);
    
    cout <<" Printing answer" << endl;

    cout << ans1;

    return 0;
}