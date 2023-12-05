#include<iostream>
#include<queue>
using namespace std;

class Node{
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

Node* buildTree() {
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    // Step A, B and C
    Node* root = new Node(data);

    cout <<"Enter data for left part of " << data << " node " <<endl;
    root->left = buildTree();

    cout <<"Enter data for right part of " << data << " node " <<endl;
    root-> right = buildTree();

    return root;
}

// traverwsal
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    // intially
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        // A
        Node* temp = q.front();
        //B
             q.pop(); 

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        } else{
        
        //c
        cout << temp->data <<" ";
        //D
        if(temp -> left) {
            q.push(temp -> left);
        }
        if(temp->right) {
            q.push(temp->right);
        }
        }
    }
}

void inorderTraversal(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    // LNR
    inorderTraversal(root->left);
    cout << root ->data << " ";
    inorderTraversal(root->right);
}

void preOrderTraversal(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    // NLR
    cout << root ->data <<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
    if(root == NULL)
    return;

    // LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root -> data <<" ";
}

int height(Node* root) {
    if(root == NULL)
    return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans; 
}

int main() {

    Node* root = NULL; 

    root = buildTree();
    levelOrderTraversal(root);
    cout << "height: " << height(root) << endl;


    return 0;
}