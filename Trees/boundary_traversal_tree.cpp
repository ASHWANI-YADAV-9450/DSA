 #include<iostream>
 #include<map>
 #include<vector>
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

////// 

void printLeftBoundary(Node* root) {
    // base case
    // if root is NULL, then go back
    if(root == NULL)
    return;
    // if root is a leaf node, then go back
    if(root->left == NULL && root->right == NULL)
    return;

    cout << root->data <<" ";
    if(root->left) {
        printLeftBoundary(root->left);
    } else{
    printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root) {
    // base case
    if(root == NULL)
    return;
    if(root->left == NULL && root->right == NULL) {
        cout << root->data <<" ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right); 
}


void printRightBoundary(Node* root) {
    // base case
    if(root == NULL)
        return;
        if(root->left == NULL && root->right == NULL)
        return;

       if(root->right){
         printRightBoundary(root->right);
       } else {
        printRightBoundary(root->left);
       }

        cout << root->data<<" "; 
}


void boundaryTraversal(Node* root) {
    if(root == NULL)
        return;

        cout <<root->data << " ";
        //A
        printLeftBoundary(root->left);
        //B
        printLeafBoundary(root);
        //c
        printRightBoundary(root->right);
}



int main() {

    // Node* root = NULL;
    // root = buildTree();
    // // printRightView(root);
    // vector<int> ans;
    // int level =0;

    // printRightView(root, ans, level); 

    

   Node* root = buildTree();

   boundaryTraversal(root);

    return 0;
}


//10 20 30 -1 -1 40 60 -1 -1 -1 80 50 -1 70 -1 -1 90 -1 -1