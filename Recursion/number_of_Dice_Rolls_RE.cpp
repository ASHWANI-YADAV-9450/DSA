#include<iostream>
using namespace std;

 int  numRollsToTarget(int n, int k, int target) {
        // base
        if(target < 0) return 0;
        if(n == 0 && target == 0) return 1;
        if(n == 0 && target != 0) return 0;
        if(n != 0 && target == 0) return 0;

        int ans =0;
        for(int i=1; i<=k; i++) {
            ans = ans + numRollsToTarget(n -1, k, target - i);
        }
        return ans;
    }


int main() {
    int n =2;
    int k =6;
    int target =7;

    int ans1 = numRollsToTarget( n, k, target);
    cout << "ans: " << ans1<< endl;
      

}