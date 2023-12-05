#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void in(Node* root, Node*& prev) {
    if (!root)
        return;

    in(root->left, prev);
    prev->left = 0;
    prev->right = root;
    prev = root;
    in(root->right, prev);
}

Node* flatten(Node* root) {
    if (!root)
        return NULL;

    Node* dummy = new Node(-1);
    Node* prev = dummy;
    in(root, prev);
    prev->left = prev->right =0;
    root = dummy->right;
    return root; 
}

// Helper function to print the flattened linked list
void printList(Node* node) {
    while (node) {
        cout << node->data << " ";
        node = node->right;
    }
}


int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    cout << "Original BST:" << endl;
    printList(root);
    cout << endl;

    Node* flattenedRoot = flatten(root);

    cout << "Flattened Linked List:" << endl;
    printList(flattenedRoot);

    return 0;
}