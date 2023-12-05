#include<iostream>
#include<vector>
using namespace std;

int maxSubArrayHelper(vector<int>&v, int start, int end) {
    if(start == end) return v[start];
    int maxLeftBorderSum = INT16_MIN, maxRightBorderSum  = INT16_MIN;
    int mid = start + ((end - start) >>1);

    int maxLeftSum = maxSubArrayHelper(v, start, mid);
    int maxRightSum = maxSubArrayHelper(v, mid + 1, end );

    // max cross Border Sum.
    int leftBorderSum =0, rightBorderSum =0;
    for(int i=mid; i>= start; i--) {
        leftBorderSum +=v[i];
        if(leftBorderSum > maxLeftBorderSum) maxLeftBorderSum = leftBorderSum;
    }

     for(int i=mid + 1; i<= end; i++) {
        rightBorderSum +=v[i];
        if(rightBorderSum > maxRightBorderSum) maxRightBorderSum = rightBorderSum;
    }

    int crossBorderSum = maxLeftBorderSum + maxRightBorderSum ;
    return max(maxLeftSum, max(maxRightSum, crossBorderSum));
}


int maxSubArray(vector<int>& nums) {
    return maxSubArrayHelper(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maxSubArray(nums);

    cout << "Maximum subarray sum: " << ans << endl;

    return 0;
}