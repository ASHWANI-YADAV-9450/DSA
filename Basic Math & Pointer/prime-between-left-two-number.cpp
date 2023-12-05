#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


vector<bool> Sieve(int n) {
    // create sieve array of N size telling isPrime.

    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    // for(int i=2; i<=n; i++){  // simple
    for(int i=2; i*i<=n; i++){ // optimization 2:
        if(sieve[i] == true) {
            // int j=i*2;  // simple method
            int j = i * i; // otimization 1;
            // first unmarked number would be i*i, as others have been marked by 2 to (i - 1)

            while(j<=n) {
                sieve[j] = false;
                j +=i;
            }
        }
    }
    return sieve;
}


vector<bool> segSieve(int L, int R) {
    // get me prime array, i will use it to mark seg sieve
    vector<bool>sieve=Sieve(sqrt(R));
    vector<int>basePrimes;
    for(int i=0; i<sieve.size(); i++) {
        if(sieve[i]) {
            basePrimes.push_back(i);
        }
    } 

    vector<bool>segSieve(R-L+1, true);
    if(L== 1 || L == 0) {
        segSieve[L] = false;
    }

    for(auto prime:basePrimes) {
        int first_mul = (L / prime) * prime;
        if(first_mul < L) {
            first_mul +=prime;
        }
        int j = max(first_mul, prime*prime);
        while(j <= R) {
            segSieve[j - L] = false;
            j +=prime;
        }
    }
    return segSieve;
}
 
int main() {
    int L = 110;
    int R = 130;
    vector<bool>ss = segSieve(L, R);
    for(int i=0; i<ss.size(); i++) {
        if(ss[i] ) {
            cout << i + L << " " ;
        }
    }

    return 0;
}