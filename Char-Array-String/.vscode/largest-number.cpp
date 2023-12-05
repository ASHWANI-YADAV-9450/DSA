#include<iostream>
// #include<string>
#include<algorithm>
#include<vector>
using namespace std;

static bool mycomp(string a, string b) {
    string t1=a+b;
    string t2= b+a;
    return t1 > t2;
}


string  largestNumber(vector<int>& nums) {
    vector<string>snums;

    for(auto n:nums) {
        snums.push_back(to_string(n));
    }

  sort(snums.begin(), snums.end(), mycomp);

    if(snums[0] == "0") return "0";
    string ans="";
    for(auto str:snums) {
        ans+=str;
    }
    return ans;
}


int main() {
    // nums = [3,30,34,5,9]
vector<int> nums = {3,30,34,5,9};

string answer  =largestNumber(nums);

cout<<"ans: " << answer <<endl;
}