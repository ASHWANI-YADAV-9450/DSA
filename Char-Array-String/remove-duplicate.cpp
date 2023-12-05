#include<iostream>
#include<string>
using namespace std;

string removeAdjacentDuplicate(string str){
    
    
    string ans ="";
    int i =0;

    // while( i < str.length() ) {

    //     if(ans.length() > 0) {
    //         if(ans[ans.length() -1] == str[i]) {
    //             ans.pop_back();
    //         } else {
    //             ans.push_back(str[i]);
    //         }
    //     } 
    
    // else{
    //     ans.push_back(str[i]);
    // } 
    // i++;
    // }

    // OR

    while( i < str.length() ) {

            if( ans.length()> 0 && ans[ans.length() -1] == str[i]) {
                ans.pop_back();
            } else { 
                ans.push_back(str[i]);
            }
    i++;
    }
    return ans;
    
}

int main() {

    string str = "azxxzy";
    string ans = removeAdjacentDuplicate(str);
    cout<<"ans:  " <<ans<<endl;
}