#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
};

// create new node
node *newNode(int val) {
    node* Node = new node();
    Node->val = val;
    Node->left = NULL;
    Node->right = NULL;

    return Node;

}

node* lowestCommonAncestor(node* root, node* p, node* q) {
    // base case
    if(root == NULL)
    return NULL;
 

    // check for p and q;
    if(root->val == p->val)
    return p;

    if(root->val == q->val)
    return q;

    node* leftAns = lowestCommonAncestor(root->left, p, q);
    node* rightAns = lowestCommonAncestor(root->right, p, q);

    if(leftAns == NULL && rightAns == NULL)
    return NULL;
    else if(leftAns != NULL && rightAns == NULL)
    return leftAns;
   else if(leftAns == NULL && rightAns != NULL)
    return rightAns;
    else {
        return root;
    }
}

int main(){
       node* root = newNode(3);
    root->left = newNode(5);
    root->right = newNode(1);
    root->left->left = newNode(6);
    root->left->right = newNode(2);
    root->right->left = newNode(0);
    root->right->right = newNode(8);
    root->left->left->left = newNode(0);
    root->left->left->right = newNode(0);
    root->left->right->left = newNode(7);
    root->left->right->right = newNode(4);

    node* p = root->left;
    node* q = root->right;
    
    node* ans = lowestCommonAncestor(root, p, q);
    cout << "ans: " << ans->val << endl;

    return 0;

}