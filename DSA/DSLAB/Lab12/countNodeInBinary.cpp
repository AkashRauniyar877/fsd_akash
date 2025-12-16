#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
// Function to count the number of nodes in a binary tree
int countNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 // print the node
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    int totalNodes = countNodes(root);
    cout << "Total number of nodes in the binary tree: " << totalNodes << endl;

    return 0;
}