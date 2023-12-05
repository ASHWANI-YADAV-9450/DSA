#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(string str, string output,int i, vector<string>& v) {
    // base case
    if(i>= str.length()) {
        // cout << output << endl;
        v.push_back(output);
        return;
    }

    // exclude
    printSubsequences(str, output , i+1, v);

    // include
    // below line is responsible for concatenation of output string
    //asn ith charater of str string 
    output.push_back(str[i]);
    printSubsequences(str, output, i+1,v);
}

int main() {
    string str = "abc";
    string output = "";
    vector<string> v;

    int i=0;
    printSubsequences(str, output, i, v);

    cout<<"Printing  all subsequesnces " <<endl;

    for(auto val:v) {
        cout << val << " ";
    }

    cout << endl << "Size of vector is: " << v.size() << endl;

    return 0;
}