#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
};

// create new node
node *newNode(int data) {
    node *Node = new node();
    Node->data  =data;
    Node->left = NULL;
    Node->right = NULL;

    return Node;
};

int convertIntoSumtree(node* root){
    // base case
    if(root == NULL)
    return 0;

    int leftAns = convertIntoSumtree(root->left);
    int rightAns = convertIntoSumtree(root->right);

    root->data = leftAns + root->data + rightAns;

    return root-> data;
}


int main()
{
    node *root = newNode(26);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->right = newNode(3);
     
    int total = convertIntoSumtree(root);
    
    cout << "ans: " << total << endl;
}