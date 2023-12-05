#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int>  maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int> ans;

    // first window of k size  
    for(int i=0; i<k; i++) {
        //chote element remove krdo,
        while(!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }
        // inserting index, so that we can checkout of window element
        dq.push_back(i);
    }

    // store answer for first window
    ans.push_back(nums[dq.front()]);

    // remaining windows ko process
    for(int i=k; i<nums.size(); i++) {
        // out of window element ko remove krdia
        if(!dq.empty() && i-dq.front() >= k) {
            dq.pop_front();
        }

        // ab firse current element k liye chotte element 
        // ko remove karna h
        while(!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }
        // inserting index, so the we can checkout of window element
        dq.push_back(i);

        // current window ka asnwer store krna h
        ans.push_back(nums[dq.front()]);
    }

    return ans; 


}



int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k =3;

    vector<int> ans = maxSlidingWindow(nums, k);

   cout << "Printing answer:" << endl;
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

    
}