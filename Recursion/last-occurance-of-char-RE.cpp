#include<iostream>
using namespace std;

// Left to right
// void lastOccLTR(string& s, char x, int i, int&ans) {
//     // base case
//     if(i >= s.size()) {
//         return;
//     }
//     // ek case solution
//     if(s[i] == x) {
//         ans =i;
//     }

//     //RE
//     lastOccLTR(s, x, i+1, ans);
// }


// Rigth to left
void lastOccRTL(string& s, char x, int i, int&ans) {
    // base case
    if(i < 0) {
        return;
    }
    // ek case solution
    if(s[i] == x) {
        ans =i;
        return;
    }

    //RE
    lastOccRTL(s, x, i-1, ans);
}

int main() {
    string s;
    cin>>s;
    char x;
    cin >> x;
    int ans = -1;
    // lastOccLTR(s, x, 0, ans);
    lastOccRTL(s, x, s.size() -1, ans);
    cout << ans <<endl;
}