#include<iostream>
#include<string>
using namespace std;


int main() {
    string str= "This is my first Message";
    string  word = "Lucky";

    // str.replace(0, 4, word);
    str.replace(11, 5, "Second");

    cout << str <<endl;
}