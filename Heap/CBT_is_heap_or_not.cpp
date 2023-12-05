#include <iostream>
#include <climits>
#include <utility>

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

pair<bool, int> solve(Node* root) {
    // base case
    if (root == NULL) {
        pair<bool, int> p = make_pair(true, INT_MIN);
        return p;
    }
    if (root->left == NULL && root->right == NULL) {
        // leaf node
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = solve(root->left);
    pair<bool, int> rightAns = solve(root->right);

    if (leftAns.first == true &&
        rightAns.first == true &&
        root->data >= leftAns.second &&
        root->data >= rightAns.second) {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    } else {
        pair<bool, int> p = make_pair(false, root->data);
        return p;
    }
}

bool isMaxHeap(Node* root) {
    if (root == NULL)
        return true;

    pair<bool, int> result = solve(root);

    return result.first;
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(15);
    root->right = new Node(30);
    root->left->left = new Node(10);
    root->left->right = new Node(17);
    root->right->left = new Node(25);
    root->right->right = new Node(40);

    if (isMaxHeap(root)) {
        cout << "The tree is a max-heap." << endl;
    } else {
        cout << "The tree is not a max-heap." << endl;
    }

    return 0;
}
