#include<iostream>
#include<string>
using namespace std;

bool compareString(string a, string b) {
    if(a.length() != b.length())
    return false;
else {
    // int j =0;
    for(int i=0; i<a.length(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
        // j++;
    }
}
return true;
} 

int main() {
    string a = "asw";
    string b = "asw";

    cout<< compareString(a,b)<<endl;
}