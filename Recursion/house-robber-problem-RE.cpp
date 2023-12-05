#include<iostream>
#include<vector>
using namespace std;

int roberHelper(vector<int>& nums, int i) {
    if(i >= nums.size()) {
        return 0;
    }

    // sol. 1 case;
    int robAmt1 = nums[i] + roberHelper(nums, i+2);
    int robAmt2 =0 + roberHelper(nums, i + 1);

    return max(robAmt1, robAmt2); 
    
}

int main() {
    vector<int> nums{1,2,3,1};
   int ans = roberHelper(nums, 0);
   cout<<"ans: " <<ans << endl;
}