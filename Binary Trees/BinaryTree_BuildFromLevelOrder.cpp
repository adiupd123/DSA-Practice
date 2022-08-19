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

// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

node* buildFromLevelOrder(node* root){
    queue<node*> q;
    
    cout<<"Enter data for root:"<<endl;
    int data;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter data for left child of: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter data for right child of:"<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
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

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    node* root = NULL;
    root = buildFromLevelOrder(root);
    levelOrderTraversal(root);

    return 0;
}