#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        
        node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

node* buildTree(node* root){
    cout<<"Enter data:\n";
    int d;
    cin>>d;
    root = new node(d);
    if(d==-1)
        return NULL;
    cout<<"Enter data for left child of "<<d<<":\n";
    root->left = buildTree(root->left);
    cout<<"Enter data for right child of "<<d<<":\n";
    root->right = buildTree(root->right);
    return root;
}

// Inorder: 7 3 11 1 17 5

void inOrderTraversal(node* root){
    if(root->left)
        inOrderTraversal(root->left);
    cout<<root->data<<" ";
    if(root->right)
        inOrderTraversal(root->right);
}

// Preorder: 1 3 7 11 5 17

void preOrderTraversal(node* root){
    cout<<root->data<<" ";
    if(root->left)
        preOrderTraversal(root->left);
    if(root->right)
        preOrderTraversal(root->right);
}

// Postorder: 7 11 3 17 5 1

void postOrderTraversal(node* root){
    if(root->left)
        postOrderTraversal(root->left);
    if(root->right)
        postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = NULL;
	root = buildTree(root);
	cout<<"Inorder Traversal: ";
    inOrderTraversal(root);
    cout<<endl;
	cout<<"Preorder Traversal: ";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    postOrderTraversal(root);
    cout<<endl;
   return 0;
}