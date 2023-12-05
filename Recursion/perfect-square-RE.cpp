#include<iostream>
#include<math.h>
using namespace std;

int numSquareHelper(int n) {
    // base 
    if(n == 0) return 1;
    if(n < 0) return 0;

    int ans = INT16_MAX;
    int i=1;
    int end = sqrt(n);
    while(i <= end) {
        int perfectSquare = i*i;
        int numberOfPrefectSquares = 1 + numSquareHelper (n - perfectSquare);
        if(numberOfPrefectSquares < ans) {
            ans = numberOfPrefectSquares;
        }
        ++i;
    }
    return ans;
}

int main() {
    int n = 13;
    int ans = numSquareHelper(n) -1;
    cout << "ans: " << ans << endl;
}