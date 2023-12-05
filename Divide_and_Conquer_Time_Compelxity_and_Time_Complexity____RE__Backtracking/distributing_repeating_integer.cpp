#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool canDistributeHelper(vector<int>& counts, vector<int>& quantity, int ithCustomer) {
    // base
    if(ithCustomer == quantity.size()) {
        return true;
    }

    for(int i=0; i<counts.size(); i++) {
        if(counts[i] >=quantity[ithCustomer]) {
            counts[i] -= quantity[ithCustomer];
            if(canDistributeHelper(counts, quantity, ithCustomer + 1)) {
                return true;
            }
            counts[i] += quantity[ithCustomer]; // backtrack
        }
    }
    return false;
}

bool canDistribute(vector<int>& nums, vector<int>& quantity) {
    unordered_map<int, int> countMap;
    for (auto num : nums)
        countMap[num]++;
    vector<int> counts;
    for (auto it : countMap)
        counts.push_back(it.second);
    sort(quantity.rbegin(), quantity.rend()); // sort DESC. 
    return canDistributeHelper(counts, quantity, 0);
}

int main() {
     vector<int> nums = {1, 2, 3,3};
    vector<int> quantity = {2};

    bool result = canDistribute(nums, quantity);

    cout << "Can distribute: " << (result ? "true" : "false") << endl;

    return 0;

} 