#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string> &ans, int n, int open, int close, string output) {
    // base case
    if(open ==0 && close == 0) {
        ans.push_back(output);
        return;
    }

    // include opne bracket
    if(open > 0) {
        output.push_back('(');
        solve(ans, n , open -1, close, output);
        // backtracking
        output.pop_back();
    }



    // include close bracket

    if(close > open) {
        output.push_back(')');
        solve(ans, n , open, close-1, output);
        // backtrack
        output.pop_back(); 
    }

}

int main() {
    int n =3;
    vector<string> ans;
    int open = n;
    int close = n;
    string output = "";
    solve(ans, n, open, close, output);
    // return ans;
   
   // printing result
   for(string s: ans) {
    cout << s << endl;
   }

}