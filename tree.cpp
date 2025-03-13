#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int num){
        this->data=num;
        this->left=NULL;
        this->right=NULL;
    }
};
 
 void print(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);

    print(root->right);
    // return;
 }
node* buildtree( const vector<int>& v,int& i){
        
        if(i>=v.size() || v[i]==-1  ){
            i++;
            return NULL;
        }
        node* root=new node(v[i]);
        i++;
        root->left=buildtree(v,i);
        root->right=buildtree(v,i);
        return root;

}

vector<vector<int>> levelordertraversal(node* root){
    vector<vector<int>> ans;
    if(root==NULL)return ans;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node* temp=q.front();
            q.pop();
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;

}


int main(){
    
    // vector<int> v={1,3,7,2,-1,-1,4,-1,-1,2,-1,-1};
    vector<int> v={1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    int index=0;
    node* root = buildtree(v,index);
    vector<vector<int>> vec=levelordertraversal(root);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
                    cout<<vec[i][j];
        }
        cout<<endl;
    }
    // print(root);
}