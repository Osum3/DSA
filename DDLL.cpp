#include<iostream>
using namespace std;

#include <bits/stdc++.h>
#include <utility>

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int n){
        data=n;
        next=NULL;
        back=NULL;
    }
    Node(int n,Node*next1, Node* back1){
        data=n;
        next=next1;
        back=back1;
    }
};


Node* insert(vector<int> v){
    Node* head=new Node(v[0]);
    Node* prevn=head;
    int i=1;
    while(i<v.size()){
        Node* temp=new Node(v[i],NULL,prevn);
        prevn->next=temp;
        prevn=temp;
        i++;

    }
    return head;
}




Node* del(Node* head){
    Node* prev=head;
        while(head!=NULL){
            if(prev->next->next == NULL){
                prev->next=NULL;
                break;

            }
            prev=prev->next;
        }
        return head;
}
Node* mid(Node* head,int n){
    Node* temp=head;
        Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data == n){
            Node* extra=temp->next;
               extra->back=prev;
               prev->next=temp->next;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


void print(Node* head){

        
        while(head!=NULL){
            cout<<head->data<<" ";
          
            head=head->next;
            cout<<" ";

        }
}
    Node* PAIRS(Node*head){
       Node* left=head;
       Node* right=head;
       int n=8;
       vector<int> v;
       while(right->next != NULL){
            right=right->next;
       }
       while(left->data < right->data ){

                int sum=left->data + right->data;
                if(sum==n){
                    v.push_back(left->data );
                    v.push_back( right->data );


                    left=left->next;
                    right=right->back;
                }
                else if(sum>n){
                    right=right->back;
                }
               else{
                left=left->next;
               }

       }
       for(int i=0;i<v.size();i++){
        cout<<v[i];
       }


    }

    Node* dupli(Node* head){
        Node* first=head;
        Node* second=first->next;

        while(first!=NULL && first->next!=NULL  ){
            
            Node* second=first->next;
            while(second!=NULL && first->data==second->data){
                second=second->next;
            }
            first->next=second;
            if(second){second->back=first;}
            
           first=first->next;
        }
        print(head);
    }



int main(){
    vector<int> v={1,1,1,2,3,3,4};
    Node* head=insert(v);
    dupli(head);
   
}