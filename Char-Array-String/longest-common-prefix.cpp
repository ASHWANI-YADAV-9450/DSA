#include<iostream>
#include<vector>
using namespace std;

string longestComponentPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true) {
            char curr_ch = 0;
            for(auto str: strs) {
                 cout<<"strsize: "<<str[i] <<endl;
                if(i>= str.size()) {
                    // out of bound
                    curr_ch =0;
                    break;
                }

                // jsut started
                if(curr_ch == 0) {
                    // cout<<"strsize: "<<str[i] <<endl;
                    curr_ch = str[i];
                }
                else if(str[i] != curr_ch) {
                    curr_ch =0;
                    break;
                }
            }
            if(curr_ch == 0) {
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }  

int main() {
    vector<string> strs = {"flowers", "flow", "flight"};

    string ans = longestComponentPrefix(strs);

    cout<<"ans: " << ans <<endl;
}  