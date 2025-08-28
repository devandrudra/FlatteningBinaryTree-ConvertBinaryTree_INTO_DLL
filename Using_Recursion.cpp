#include<iostream>
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

void DoublyLinkedLIst(node** head, node* root)
{
    if(root == nullptr) return;
    static node* prev = nullptr;
    DoublyLinkedLIst(head, root -> left);
    if(prev == nullptr) {
        *head = root;
    }
    else {
        prev -> right = root;
        root -> left = prev;
    }
    prev = root;

    DoublyLinkedLIst(head, root -> right);

}


int main()
{
    // node* head = new node(10);
    // head -> left = new node(12);
    // head -> left -> left = new node(25);
    // head -> left -> right = new node(30);
    // head -> right = new node(15);
    // head -> right -> left = new node(36);
    // DoublyLinkedLIst(&head, head);
    // while(head != nullptr) {
    //     cout << head -> data << ' ';
    //     head = head -> right;
    // }

    // pair<int, string> p = {5, "rudra"};
    auto p = make_pair(10, "example");
    cout << p.second;
    return 0;
}