#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct *Node Getnewnode(int data){
    struct *Node temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    
    return temp;
}

struct Node* insert_node(struct *Node root,int data){

    if(root == NULL){
         struct *Node root =  Getnewnode(data);  
    }else if(data <= root->data)
        root->left = insert_node(root,data);
    else if(data >= root->data)
        root->right = insert_node(root,data);

    return root;
}
void print_BST(struct *Node root){
    cout<<root->data<<endl;
    print_BST(root->left);
    print_BST(root->right);
}
int main(){

    struct Node* root = NULL;

    root = insert_node(root,10);
    root = insert_node(root,20);
    root = insert_node(root,30);
    root = insert_node(root,40);

    print_BST(root);
    return 0;
}