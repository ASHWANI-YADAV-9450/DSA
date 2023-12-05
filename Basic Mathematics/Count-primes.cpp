#include<iostream>
#include<vector>
using namespace std;


int countPrimes(int n) {
    if(n == 0) true;

    vector<bool> prime(n, true);  // all are prime marked already
    prime[0] = prime[1] = false;

    int ans =0;

    for(int i=2; i< n; i++) {
        if(prime[i]) {
            ans++;

            int j=2*i;
            while(j<n) {
                prime[j] = false;
                j+=i;
            }
        }
        
    }
    return ans;
}

int main() {
    int n  = 11;

    int ans1 = countPrimes(n);

cout<<"ans: " << ans1<<endl;

}