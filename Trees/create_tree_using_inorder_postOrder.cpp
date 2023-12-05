#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int findPosition(int arr[], int n, int element) {
    for(int i=0; i<n; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}


// build tree from inorder and preorder travesal 

Node* buildTreeFromPreOrderInOrder(int inorder[], int preorder[], int size, int &preIndex, int inorderStart, int inorderEnd) {

    // base case
    if(preIndex >= size || inorderStart > inorderEnd) {
        return NULL;
    }

    // step A:
    int element = preorder[preIndex++];
    Node* root = new Node(element);
    int pos = findPosition(inorder, size, element);  // we can otimeize by usning hashmap in place of findposition which take O(n) size

    // step B: root->left solve
    root->left = buildTreeFromPreOrderInOrder(inorder, preorder, size, preIndex, inorderStart, pos-1);

    //Step C: root->right solve
    root->right = buildTreeFromPreOrderInOrder(inorder, preorder, size, preIndex, pos+1, inorderEnd);

    return root ;
}


Node* buildTreeFromPostOrderInOrder(int inorder[], int postorder[], int  &postIndex, int size, int inorderStart, int inorderEnd, unordered_map<int, int> &mapping) {
    // basecase
    if(postIndex < 0 || inorderStart > inorderEnd) {
        return NULL;  
    }

    //A
    int element = postorder[postIndex];
    postIndex--;
    Node* root = new Node(element); 

    // int pos = findPosition(inorder, size, element);

    int pos = mapping[element];
    // root->right solve
    root->right = buildTreeFromPostOrderInOrder(inorder, postorder, postIndex, size, pos+1, inorderEnd, mapping);

    //root->left solve
    root->left = buildTreeFromPostOrderInOrder(inorder, postorder, postIndex, size, inorderStart, pos -1, mapping);

    return root;
}


// traver sal
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


void createMapping(unordered_map<int, int> & mapping, int inorder[], int n) {
    for(int i=0; i<n; i++) {
        mapping[inorder[i]] = i;
    }
}

int main() {
     int inorder[] = {40,20,10,50,30,60};
    int postorder[] = {40,20,50,60,30,10};
    int size = 6;
    int postIndex = size-1;
    int inorderStart =0;
    int inorderEnd = size-1;

    unordered_map<int, int> mapping;

    createMapping(mapping, inorder, size);

    cout << "Building Tree: " << endl;
    Node* root = buildTreeFromPostOrderInOrder(inorder, postorder, postIndex, size,  inorderStart, inorderEnd, mapping);

    cout<< endl << "Printing level order traversal " << endl;
    levelOrderTraversal(root);
}