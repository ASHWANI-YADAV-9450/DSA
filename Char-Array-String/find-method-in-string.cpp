#include<iostream>
#include<string>
using namespace std;


int main() {

    string sentence = "hello this side asw";
    string target = "side";


    if(sentence.find(target) == std::string::npos) {
        cout<<"not found ";
    } else {
        cout<<"found"<<endl;
    }
}