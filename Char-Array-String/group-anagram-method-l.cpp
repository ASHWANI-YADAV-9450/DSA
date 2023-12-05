#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string> > mp;

    for(auto str:strs) {
        string s= str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>>ans;

    for(auto it = mp.begin(); it!=mp.end(); it++) {
        ans.push_back(it->second);
    }
    return ans;
}

int main() {
     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> anagramGroups = groupAnagrams(strs);

      // Printing the grouped anagrams
    for (const auto& group : anagramGroups) {
        cout << "[ ";
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
}