#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int> gas, vector<int> cost) {
    // kitna petrol kam padgya
    int deficit = 0;
    // kitna petrol bacha hua h
    int balance =0;
    // circuit  kaha se start krre ho
    int start =0;

    for(int i=0; i<gas.size(); i++) {
        balance += gas[i] - cost[i];
        if(balance < 0) {
            // yahi pr galti hogi 
            deficit += balance;
            start = i+1;
            balance =0;
        }
    }

    if(deficit + balance >= 0) {
        return start;
    } else {
        return - 1;
    }
}


int main() {
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int ans = canCompleteCircuit(gas, cost);
    cout << "ans: " << ans << endl;
}