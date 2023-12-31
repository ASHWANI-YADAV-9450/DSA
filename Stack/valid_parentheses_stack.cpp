#include<iostream>
#include<stack>
using namespace std;


bool isValid(string s) {

    stack<char> st;

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        // opening bracket
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            // closing bracket
            if(!st.empty()) {
                char topCh = st.top();
                if(ch == ')' && topCh == '(') {
                    // matching brackets
                    st.pop();
                }
                else  if(ch == '}' && topCh == '{') {
                    // matching brackets
                    st.pop();
                }
                else  if(ch == ']' && topCh == '[') {
                    // matching brackets
                    st.pop();
                } else {
                    // bracket not matching 
                    return false;
                }
                
            } else {
                return false;
            }
        }
    }
    if(st.empty()) {
        // valid
        return true;
    } else { 
        return false;
    }
}

int main() {
    string s ="({[]})";

    cout <<"ans: " <<isValid(s) << endl;
}