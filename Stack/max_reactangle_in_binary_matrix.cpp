#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmallerElement(vector<int>& v) {

    stack<int> s;
    s.push(-1);
     vector<int> ans(v.size());

     for (int i=0; i<v.size(); i++) {
          int curr = v[i];

        // apka answer stack me
        while ( s.top() != -1 && v[s.top()] >= curr)
        {
            s.pop();
        }

        // chota element mil chuka hai -> ans store
        ans[i] = s.top();

        // push kardo curr element ko
        s.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int curr = v[i];

        // apka answer stack me
        while ( s.top() != -1 && v[s.top()] >= curr)
        {
            s.pop();
        }

        // chota element mil chuka hai -> ans store
        ans[i] = s.top();

        // push kardo curr element ko
        s.push(i );
    }
    return ans;
}


int largestRectangle(vector<int> &height) {

    // step1: prevSmaller output
    vector<int> prev = prevSmallerElement(height);


    // step2: nextSmaller call
    vector<int> next = nextSmaller(height);

    int maxArea = INT16_MIN;
    int size = height.size();

    for(int i=0; i<height.size(); i++) {
        int length = height[i];

        if(next[i] == -1) {
            next[i] = size;
        }

        int width = next[i] - prev[i] - 1;

        int area = length*width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int maximalReactangle(vector<vector<char>>& matrix) {
    vector<vector<int>> v;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0; i<n; ++i) {
        vector<int> t;
        for(int j=0; j<m; j++) {
            t.push_back(matrix[i][j] - '0');
        }
        v.push_back(t);
    }

    int area = largestRectangle(v[0]);
    for(int i=1; i<n; i++) {
        for(int j=0; j<m; ++j) {
            //let's update current row with previous values;
            if(v[i][j]) {
                v[i][j] += v[i-1][j];
            }
            else{
                v[i][j] =0;
            }
        }
        area = max(area, largestRectangle(v[i]));
    }
    return area;
}


int main() {

vector<vector<char>> mat = {
    {'1', '0', '1', '0', '0'},
    {'1', '0', '1', '1', '1'},
    {'1', '1', '1', '1', '1'},
    {'1', '0', '0', '1', '0'}
};

    int maxArea = maximalReactangle(mat);
    cout << "The maximum are is: " << maxArea << "\n";
    return 0;
}