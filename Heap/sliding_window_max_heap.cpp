#include<iostream>
#include<vector>
#include<queue>
#include <algorithm> 
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    priority_queue<pair<int,int>>pq; // pair<val, index>
    vector<int> ans;

    // consider first window.
    for(int i=0; i<k; i++) {
        pq.push({nums[i], i});
    }
    // store max of first windows 
    for(int i=k; i<nums.size(); i++) {
        pq.push({nums[i], i});

        // remove if maxxs are from previous windows.
        while(pq.top().second <= i-k) {
            pq.pop();
        }
        ans.push_back(pq.top().first);
    }
    return ans;
}



int main() {
    // Example usage of maxSlidingWindow function
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxSlidingWindow(nums, k);

    // Print the result
    cout << "Max Sliding Window Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}