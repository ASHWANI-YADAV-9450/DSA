#include<iostream>
#include<vector>
using namespace std;


void combinationSum_helper(vector<int>& candidates, int target, vector<int>& v, vector<vector<int>>& ans, int index) {
    // base
    if(target == 0) {
        ans.push_back(v);
        return;
    }

    if(target < 0) {
        return;
    }

    for(int i=index; i<candidates.size(); i++) {
        v.push_back(candidates[i]);
        combinationSum_helper(candidates, target-candidates[i],v,ans,i);
        v.pop_back();
    }
}


int main() { 
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int> v;
    combinationSum_helper(candidates, target, v, ans, 0);

    cout << "Printing answer:" << endl;

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}