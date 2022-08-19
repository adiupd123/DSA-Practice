#include <iostream>
#include<queue>
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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();    
        if(temp != NULL){
           
            cout<<temp->data<<" ";
           
            if(temp->left!=NULL)
                q.push(temp->left); 
           
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        else{
            cout<<"\n";
            if(!q.empty())
                q.push(NULL);
        }
        
    }
}

int main() {
	node* root = NULL;
	root = buildTree(root);
	levelOrderTraversal(root);
	return 0;
}
