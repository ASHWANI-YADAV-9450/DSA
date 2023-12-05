#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void permutationUnique(vector<int>& nums, vector<vector<int>>& ans, int start) {
    // base
    if(start == nums.size()) {
        ans.push_back(nums);
        return;
    }

    unordered_map<int, bool>visited;
    for(int i=start; i<nums.size(); i++) {
        if(visited.find(nums[i]) != visited.end()){
            continue;
        }
        visited[nums[i]]  = true;
        swap(nums[i], nums[start]);
        permutationUnique(nums, ans, start + 1);
        swap(nums[i], nums[start]);
    }
}

int main() {
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> ans;

    permutationUnique(nums, ans, 0);

    cout << "Printing answer:" << endl;

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
