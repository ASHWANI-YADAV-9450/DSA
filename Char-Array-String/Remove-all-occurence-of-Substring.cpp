#include<iostream>
#include<string>
using namespace std;

string removeOccurence(string s,  string part) {
    int pos = s.find(part);
    while(pos != string::npos) {
        s.erase(pos, part.length() );
        pos = s.find(part);
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    string ans  = removeOccurence(s, part);

    cout <<"ans: " << ans<< endl;
}