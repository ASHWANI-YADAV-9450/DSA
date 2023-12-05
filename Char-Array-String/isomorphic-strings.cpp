#include<iostream>
using namespace std;


bool isIsomorphic(string s, string t) {
    int hash[256] ={0}; // mapping of each char of language 's' to language 't'
    bool istCharMapped[256] = {0};  // stores if t[i] char already mapped woth s[i].

    for(int i=0; i<s.size(); i++) {
        if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0) {
            hash[s[i]] = t[i];
            istCharMapped[t[i]] = true;
        }
    }

    for(int i=0; i<s.size(); i++) {
        if(char(hash[s[i]]) != t[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    string s ="egg";  // foo
    string t ="add";    // bar 

    bool ans = isIsomorphic(s,t);

    cout<< "ans: " <<ans <<endl;
}