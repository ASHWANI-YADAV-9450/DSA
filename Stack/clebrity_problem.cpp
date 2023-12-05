#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int celebrity(vector<vector<int>> &M, int n) {
    stack<int> st;

    // step1: push all person into stack
    for(int i=0; i<n; i++) {
        st.push(i);
    }

    // step 2: run discard method to get a mightCelebrity
    while(st.size() != 1) {
        int a = st.top(); st.pop();
        int b = st.top(); st.pop();

        // if a knows b ?
        if(M[a][b]) {
            // a is not celebrity,  might be
            st.push(b);
        } else {
            st.push(a);
        }
    }
    // step 3: Check that single person is actually celbrity ?
    int mightBeCelebrity = st.top(); st.pop();

    // Cel. should not know anyone.
    for(int i=0; i<n; i++) {
        if(M[mightBeCelebrity][i] != 0) {
            return -1;
        }
    }
    // everyone should know Cel.
    for(int i=0; i<n; i++) {
        if(M[i][mightBeCelebrity] == 0 && i != mightBeCelebrity) {
            return -1;
        }
    }
    // mightBeCelebrity is the Cel.
    return mightBeCelebrity;
}

int main() {
    vector<vector<int>> M{{0,1,0}, {0,0,0},{0,1,0}};
    int n = M.size();
    int ans = celebrity(M,n);

    if(ans != -1) {
        cout << "celebrity is : " << ans << endl;
    } else {
        cout <<" No celebrity" << endl;
    }
    

    return 0;
}