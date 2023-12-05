#include<iostream>
using namespace std;


string reverseOnlyLetter(string s) {
    int l=0, h=s.size()-1;
    while(l<h) {
        if(isalpha(s[l])  && isalpha(s[h])) {
            swap(s[l], s[h]);
            l++, h--;
        }
        else if(!isalpha(s[l])) {
            l++;
        }
         else {
            h--;
         }
    }
    return s;
}

int main() {
    string s ="ab-cd";

    string ans = reverseOnlyLetter(s);
    cout <<"ans: " << ans <<endl;
    return 0;
}