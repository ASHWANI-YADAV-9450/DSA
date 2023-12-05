#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    if(s.size() == 0) {
        return true;
    }
    int fnd = s.find("abc");
    if(fnd != string::npos) {
        // found
        string tleft = s.substr(0, fnd);
        string tright = s.substr(fnd + 3, s.size());
        return isValid(tleft + tright);
    }
    return false;
};

int main() {
    string s = "aabcbc";

    cout << " ans: " << isValid(s) << endl;

    return 0;
}