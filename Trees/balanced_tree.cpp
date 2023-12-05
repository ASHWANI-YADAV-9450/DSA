#include<iostream>
using namespace std;

class node{
    public:
    int item;
    node* left;
    node *right;
};

// create new node
node *newNode(int item) {
    node *Node = new node();
    Node->item = item;
    Node->left = NULL;
    Node->right = NULL;


    return (Node);
}

int height(node* root) {
    // base case
    if(root == NULL)
    return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans =  1 + max(leftHeight, rightHeight);
    return ans;
}

bool isBalanced(node* root) {
    // Base case
    if(root == NULL)
    return true;

    // 1 case
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight- rightHeight);

    bool ans1 = (diff <= 1);

    // Recursion
    bool leftAns = isBalanced(root-> left);
    bool rightAns = isBalanced(root->right);

    if(ans1 && leftAns && rightAns)
        return true;
        else
        return false;
}




int main() {
  

  node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  if (isBalanced(root))
    cout << "The tree is balanced";
  else
    cout << "The tree is not balanced";
}