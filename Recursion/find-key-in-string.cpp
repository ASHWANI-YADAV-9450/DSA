#include<iostream>
#include<vector>
using namespace std;

// int checkKey(string& str, int& i, int& n, char& key) {
//     // base case
//     if(i >=n) {
//         // key not found
//         return -1;
//     }

//     // 1 case check krdo
//     if(str[i] == key){
//         // return i;
//         cout <<"Found at: " << i << endl;
//     }
    

//     // bakki recursion sambhal lega
//     int newi = i+1;
//     return checkKey(str, newi, n , key);
// }


void checkKey(string& str, int i, int& n, char& key, vector<int>& ans) {
    // base case
    if(i >=n) {
        // key not found
        return ;
    }

    // 1 case check krdo
    if(str[i] == key){
        // return i;
        // cout <<"Found at: " << i << endl;

        // store in vector
        ans.push_back(i);
    }
    

    // bakki recursion sambhal lega
    // int newi = i+1;
    return checkKey(str, i+1, n , key, ans);
}

int main() {
    string str = "lovebabbar";
    int n = str.length();

    char key = 'b';

    int i=0;
    vector<int> ans;

  checkKey(str, i, n, key, ans);

  cout <<"printing ans" <<endl;
  for(auto val: ans) {
    cout << val << " ";
  }
  cout << endl;

    // cout <<"answer is: " << ans << endl;


    return 0;
}