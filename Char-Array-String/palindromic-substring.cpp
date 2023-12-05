#include<iostream>
#include<string>
using namespace std;

int expandAroundIndex(string s, int left, int right) {
    int count =0;
    // jab tak match karega, tab tak count increment kardo and i piche and j aage kardo

    while(left >=0 && right <s.length() && s[left] == s[right] ) {
        count++;
        left--;
        right++;
    }
    return count;
}

int countSubStrings(string s) {
    int totalCOunt =0;
    int n = s.length();

    for(int center=0; center<n; center++) {
        // odd
        int oddkaAns = expandAroundIndex(s, center, center);
        totalCOunt = totalCOunt + oddkaAns;

        // even
        int eventKaAns = expandAroundIndex(s, center, center+1);
        totalCOunt = totalCOunt + eventKaAns;

    }

    return totalCOunt;
}


int main() {
    string s = "abc";
    int ans = countSubStrings(s);
    cout <<"ans: "<< ans <<endl;

}