# Binary Tree to Doubly Linked List
Converting Binary tree to flat linked list whether remain the inorder same.<br>
Here I Used to approach -
## 1. Using vector 
time = O(n) <br>
space = O(n) <br>
### Approach
make a node vector to store the nodes of binary tree in inorder traversal then make a loop to connect them.

## 2. Using Recursion
time = O(n)<br>
space = O(logn) -> best case<br>
space = O(n) -> worst case<br>

### Approach
Make static prev node which store the last visited node and find out the next node<br>
Connect them and update the prev node with current visited node.
