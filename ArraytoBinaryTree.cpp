#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

Node* Newnode(int data){

    struct Node* node  =  (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;

    return node;
}

void inorder_traversal(Node* root){

    if(root == NULL){
        return;
    }

    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);    
}
void preorder_traversal(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    inorder_traversal(root->left);
    inorder_traversal(root->right);    
}

Node* insert_level_order(vector<int> ar,Node* root,int i,int n){

    if(i < n){

        Node* temp  = Newnode(ar[i]);
        root = temp;

        root->left = insert_level_order(ar,root->left,2 * i + 1,n);

        root->right = insert_level_order(ar,root->right,2 * i + 2,n);

        return root;
    } 

    return NULL;    
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 6, 6, 6};
    Node* root = insert_level_order(arr,root,0,arr.size());
    cout<<"Inorder Traversal: ";
    inorder_traversal(root);
    cout<<endl;
    cout<<"PreOrder Traversal: ";
    preorder_traversal(root);
    cout<<endl;
    return 0;
}