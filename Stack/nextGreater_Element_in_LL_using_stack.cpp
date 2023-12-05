#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

vector<int> nextGreaterNodes(ListNode* head) {
    vector<int> ll;
    while(head){
        ll.push_back(head->val);
    head=head->next;
    }

stack<int> st;

for(int i=0; i<ll.size(); ++i) {
    while(!st.empty() && ll[i] > ll[st.top()]) {
        // means. ith element is the next greater of the element index present in stack.
        int kids = st.top();
        st.pop();
        ll[kids] = ll[i];
    }
    st.push(i);
}
    while(!st.empty()) {
        ll[st.top()] =0; st.pop();

        ll[ll.size()-1] = 0;
        return ll;
    }
};

int main(){
   // create sample linked list
   ListNode* head = new ListNode(2);
   head->next = new ListNode(1);
   head->next->next = new ListNode(5);

    vector<int> ans = nextGreaterNodes(head);

    for(auto v:ans) {
        cout <<v << " ";
    }
    cout << endl;
}