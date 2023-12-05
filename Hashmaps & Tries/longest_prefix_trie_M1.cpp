#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans="";
    //loop for first string
    for(int i=0; i< strs[0].length(); i++) {
        char ch = strs[0][i];
        bool match = true;

        // compare this character with all
        // the remaining strings at the same index
        for(int j=1; j<strs.size(); j++) {
            // compare
            if(strs[j].size() < i || ch!= strs[j][i]) {
                match= false;
                break;
            }
        }

        if(match == false)
        break;
        else
        ans.push_back(ch);
    }
    return ans;
}

int main() {

    vector<string> strs = {"flower", "flow","flight"};
    // vector<string> strs = {"dog", "racecar","car"};
    string ans = longestCommonPrefix(strs);
    cout <<"ans: " << ans <<endl;

}