#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* Getnewnode(int data){

    struct Node* temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    
    return temp;
}
struct Node* insert_node(struct Node* root,int data){

    if(root == NULL){
         root =  Getnewnode(data);  
    }else if(data <= root->data){
        root->left = insert_node(root->left,data);
    }else if(data >= root->data){
        root->right = insert_node(root->right,data);
    }
    return root;
}
bool search(struct Node* root,int data){
    if(root == NULL || root->data == data)
        return root;
    else if(data <= root->data)
        return search(root->left,data);
    return search(root->right,data);
}
void print_tree_inorder(struct Node* root){
    
    if(root != NULL){
        print_tree_inorder(root->left);
        cout<<root->data<<"  ";
        print_tree_inorder(root->right);
    }
}
struct Node* print_min(struct Node* root){
    struct Node* current = root;
    while(current->left != NULL){
        current = current->left;
    } 

    return current;
}
int main(){

    struct Node* root = NULL;

 /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */

    root = insert_node(root,50);
    root = insert_node(root,30);
    root = insert_node(root,20);
    root = insert_node(root,40);
    root = insert_node(root,70);
    root = insert_node(root,60);
    root = insert_node(root,80);

    print_tree_inorder(root);
    cout<<endl;
   
    struct Node* temp = print_min(root);
    cout<<"Minimum Element = "<<temp->data<<endl;

    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(search(root,number) == true){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    system("pause");
    return 0;
}