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
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data) {
    if(root == NULL) {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }

    // no  the first node

    if(root->data > data) {
        // insert in left
        root->left = insertIntoBST(root->left, data);
    } else {
        //insert into right
        root->right = insertIntoBST(root->right, data); 
    }
    return root; 
}

void takeInput(Node* &root) {
    int data; 
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data);   
        cin >> data;
    }
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

// PreOrderTraversa
void preOrderTraversal(Node* root) {
    // NLR
        if(root == NULL)
        return;

        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    
}
    void inOrderTraversal(Node* root) {
        //LNR
        if(root == NULL)
        return;
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }

     void postOrderTraversal(Node* root) {
        //LRN 
        if(root == NULL)
        return;
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }

// assuming there are only unique values in tree
Node* findNodeInBST(Node* root, int target)  {
    // base case
    if(root == NULL) {
        return NULL;
    }

    if(root->data == target)
        return root;

        if(target > root->data){
            // right subtree me search karo
            return findNodeInBST(root->right, target);
        } else {
            return findNodeInBST(root->left, target);
        }
}

// Min value
int minVal(Node* root) {
    Node* temp = root;
   if(temp == NULL) {
    return -1;
   }

   while(temp->left != NULL) {
    temp = temp ->left;
   }
   return temp->data;
}

// Max value
int maxVal(Node* root) {
    Node* temp = root;
   if(temp == NULL) {
    return -1;
   }

   while(temp->right != NULL) {
    temp = temp ->right;
   }
   return temp->data;
}

// Delete Node
// Node* deleteNodeInBST(Node* root, int target) {
//     // base case
//     if(root == NULL)
//     return root;


//     // Step 1;
//     Node* temp = findNodeInBST(root, target);
//     // temp is the node to delete
//     // I want to delte temp
//     if(temp->left == NULL && temp->right == NULL) {
//         // Leaf node
//         delete temp;
//         return NULL;
//     }
//     else if(temp->left == NULL && temp->right != NULL) {
//         Node* child = temp->right;
//         delete temp;
//         return child;
//     }
//     else if(temp->left != NULL && temp->right == NULL) {
//         Node* child = temp->left;
//         delete temp;
//         return child;
//     } else {
//         // dono child exist krte h
//         // inorder precessor of left subtree ->left subtree me max value
//         int inorderPre = maxVal(temp->left);
//         temp->data = inorderPre;
//         temp->left = deleteNodeInBST(temp->left, inorderPre);
//         return root;
//     }
// }


// Delete Node in BST 
Node* deleteNodeInBST(Node* root,int target) {
    // bsae case
    if(root ==NULL) {
        return NULL;
    }

    if(root->data == target) {
        // isi ko delte krna h
        // 4 cases
        if(root->left == NULL && root->right == NULL) {
            // leaf node
            // delete node 
            return NULL;
        }
         else if(root->left == NULL && root->right != NULL) {
            Node* child = root->right;
            //delete root
            return child;
         }
         else if(root->left != NULL && root->right == NULL) {
            Node* child = root->left;
            // delete root;
            return child;
         }
         else {
            // both child
            // find inorder predecessor in left subtree
            int inorderPre = maxVal(root->left);
            // replace root->data value with inorder predecessor
            root->data = inorderPre;
            // delete inorder predecessor from left subtree
            root->left = deleteNodeInBST(root->left, inorderPre);
            return root;
         }
    }
     else if(target > root->data) {
        // right jana chahiye
        root->right = deleteNodeInBST(root->right, target);
     } else if(target <root->data) {
        // left jana chahiye 
        root->left - deleteNodeInBST(root->left, target);
     }
     return root;

}

int main() {
    Node* root = NULL;
    cout << "Enter the data for Node"<<endl;
    takeInput(root);
    cout <<"Printing the tree" << endl;
    levelOrderTraversal(root);

    cout << endl;
    // cout << "Printing Inorder: " << endl;
    // inOrderTraversal(root);
    // cout << endl;
    // cout << "Printing Preorder << endl" << endl;
    // preOrderTraversal(root);
    // cout << endl;
    // cout << "Printing Postorder << endl" << endl;
    // postOrderTraversal(root);

    // bool ans = findNodeInBST(root, 15);
    // cout <<  "Present or not : " << ans <<endl;

    // cout <<"Minimum value: " << minVal(root) << endl;
    // cout <<endl <<"Max value: " << maxVal(root) << endl;

    deleteNodeInBST(root, 100);
    levelOrderTraversal(root);

    return 0;
}