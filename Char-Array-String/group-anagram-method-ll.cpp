
// C++ code to demonstrate the working of includes()
#include <bits/stdc++.h>
// using namespace std;
using namespace std;

array<int, 256> hash(string s) {
    array<int, 256>hash={0};
    for(int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }
    return hash;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<array<int, 256>, vector<string> > mp;

    for(auto str:strs) {
        mp[hash(str)].push_back(str);
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