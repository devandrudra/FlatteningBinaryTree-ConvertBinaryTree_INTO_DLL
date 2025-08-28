#include<iostream>
#include<vector>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this -> data = data;
        left = nullptr;
        right = nullptr;
    }
};



void inorder_nodes(node* head, vector<node*> &TreeNodes)
{
    if(head == NULL)
    return;
    inorder_nodes(head -> left, TreeNodes);
    TreeNodes.push_back(head);
    inorder_nodes(head -> right, TreeNodes);
}

node* DoublyLinkedList(node* head)
{
    vector<node*> TreeNodes;
    inorder_nodes(head, TreeNodes);
    for(int i = 0; i < TreeNodes.size() - 1; i++)
    {
        TreeNodes[i] -> right = TreeNodes[i+1];
        TreeNodes[i+1] -> left = TreeNodes[i];
    }
    TreeNodes[TreeNodes.size()-1] -> right = nullptr;
    TreeNodes[0] -> left = nullptr;
    return TreeNodes[0];

}

int main()
{
    node* head = new node(10);
    head -> left = new node(12);
    head -> left -> left = new node(25);
    head -> left -> right = new node(30);
    head -> right = new node(15);
    head -> right -> left = new node(36);
    node* root = DoublyLinkedList(head);
    while(root != nullptr) {
        cout << root -> data << ' ';
        root = root -> right;
    }
    
    return 0;
}