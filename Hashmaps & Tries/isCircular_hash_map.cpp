#include <iostream>
#include <unordered_map>

using namespace std;

// Assuming you have a Node class defined
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

bool checkCircular(Node* head) {
    unordered_map<Node*, bool> vis;
    Node* temp = head;

    while (temp != nullptr) {
        if (vis.find(temp) != vis.end()) {
            vis[temp] = true;
        } else {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head;  // Creating a circular linked list

    bool isCircular = checkCircular(head);
    cout << "Is the linked list circular? " << (isCircular ? "Yes" : "No") << endl;

    // Don't forget to free the allocated memory to avoid memory leaks
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
