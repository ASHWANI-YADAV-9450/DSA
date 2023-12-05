#include<iostream>
#include<string>
using namespace std;


bool checkPalindrome(string s, int i, int j) {
    while(i<=j) {
        if(s[i] != s[j])
        return false;
        i++;
        j--;
    }
    return true;
}


bool validPalindrome(string s) {
    int i =0;  
    int j = s.length() - 1;

    while(i<=j) {
        if(s[i] != s[j]) {
            // ek bar i ko remove karo, ya ek bar j ko remove karo
            return checkPalindrome(s,i+1,j) || checkPalindrome(s, i, j-1);
        }
         else {
            i++;
            j--;
         }
    }
}

int main() {
    string s = "abca";

    bool ans = validPalindrome(s);
    cout<< ans <<endl;
}