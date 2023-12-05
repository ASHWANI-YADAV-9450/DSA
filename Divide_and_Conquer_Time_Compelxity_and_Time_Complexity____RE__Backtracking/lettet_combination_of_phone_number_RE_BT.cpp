#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string> &ans, int index, string output, string digits, vector<string> &mapping) {
    // base case
    if(index >= digits.length()) {
        ans.push_back(output);
        return;
    }

    // 1 case solve karo, baki recursion sambhal lega
    int digit = digits[index] - '0';
    string value = mapping[digit];
    for(int i=0; i<value.length(); i++) {
        char ch = value[i];

        // include
        output.push_back(ch);
        // recursive call
        solve(ans, index+1, output, digits, mapping);
        // backtrack
        output.pop_back();
    }
}

int main() {
    string digits = "23";
    vector<string> ans;
    if(digits.length() == 0) {
// return ans;
    cout<<" invalid lenght" << endl;
    return 0;
    } 
    

    int index =0;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    solve(ans, index, output, digits, mapping);

    // printing answer
    for(string s: ans) {
        cout << s << endl; 
    }
}