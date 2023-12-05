#include<iostream>
#include<stack>
#include<algorithm> 
#include<vector>
using namespace std;


vector<double> getCollisionTimes(vector<vector<int>>& cars) {
    vector<double> answer(cars.size(), -1); // collision time of ith car wiht the next car.
    stack<int> st;
    for(int i=cars.size()-1; i>=0; i--) {
        // check if car ahead of current car is faster ?
        while(!st.empty() && cars[st.top()][1] >= cars[i][1]) {
            st.pop();
        }

        while(!st.empty()) {
            double colTime = (double)(cars[st.top()][0] - cars[i][0]) / (cars[i][1] - cars[st.top()][1]);
            if(answer[st.top()] == -1 || colTime <= answer[st.top()]) {
                answer[i] = colTime;
                break;
            }
            st.pop();
        }
        st.push(i);
    }
    return answer;
}

int  main() {
     vector<vector<int>> v = {{1, 2}, {2, 1}, {4, 3}, {7, 2}};
    vector<double> collisionTimes = getCollisionTimes(v);

    cout << "ans: ";
    for (double time : collisionTimes) {
        cout << time << " ";
    }
    cout << endl;
}