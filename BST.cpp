#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;

    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
// INSERTIN O(Log N)
node* insert_(node* root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insert_(root->right,d);
    }
    else{
        root->left=insert_(root->left,d);
    }
    return root;
}

void prt(node* root){
        if(root==NULL){
            return;
        }
        prt(root->left);
        cout<<root->data<<" ";
        prt(root->right);
        // queue<node*> q;
        // q.push(root);
        // while(!q.empty()){
        //     int size=q.size();
        //     vector<int> vc;
        //     for(int i=0;i<size;i++){
        //         node* temp=q.front();
        //         cout<<temp->data<<" ";
        //         q.pop();
        //         if(temp->left){
        //             q.push(temp->left);
        //         }
        //          if(temp->right){
        //             q.push(temp->right);
        //         }
        //     }
            
        //     cout<<endl;
        // }

}


int main(){
        vector<int> v={10,8,21,7,27,5,4,3};
        node* root=new node(v[0]);
        for(int i=1;i<v.size();i++){
            insert_(root,v[i]);
        }
        // cout<<root->data<<endl;
        prt(root);
}





  













