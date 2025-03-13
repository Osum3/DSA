#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
   int data;   
   Node  *next;  
    Node(int n){
        data=n;
       next=nullptr;

    }

   

    
    

  
    
};
    Node* inserted(vector<int> & v){
        Node* head=new Node(v[0]);
        Node* mover=head;
        for(int i=1;i<v.size();i++){
            Node* temp=new Node(v[i]);
            mover->next=temp;
            mover = temp;
        }
        return head;
               
             

                
    }

    // search in Node
    int search(Node* &head ,int num){
        int count=0;
            Node* temp=head;
            while(temp){
                if(temp->data == num){
                    return count;
                }
                count++;
                temp=temp->next;
            }
            return 0;

    }

    //delete in LL

    Node* del(Node* head,int num){

            
         
            Node* temp=head;
            // int i=1;
            // Node* prev;
            while(temp){

                if(temp->next->data == num ){
                    temp->next=temp->next->next;
                    
                    break;


                }
                temp=temp->next;

            }
            return head;

    }
    // insertn at the middle
     Node* ins(Node* &head,int index,int num){

        if(index==1){
            Node* ele= new Node(num);
            Node* temp=head;

            ele->next=temp->next;
        head =ele;

           
            return head;
        }

           
            Node* temp=head;
            int i=1;

           
            while(temp){
               i++;

                if(i==index ){
                 Node* elm=new Node(num);
                    elm->next=temp->next;
                    temp->next=elm;

                    break;


                }
           
                temp=temp->next;

            }
            return head;

    }


    //  print a linked list 
    void print(Node* &head){

        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
            cout<<" ";

        }
        
    }
    // void dlt() {
    //     * temp =node->next->next;
    //     node->next=temp;
    //     node->val=node->next->val;
    //     node->next=NULL;
        

    // }
    Node* sort(Node* head){
        Node* temp=head;
        Node* zerohead=new Node(-1);
        Node* zero=zerohead;
        Node* onehead=new Node(-1);
        Node* one=onehead;

        Node* twohead=new Node(-1);
        Node* two=twohead;
        
        int c=0;
        while(temp){
            if(temp->data == 0){
               
                zero->next=temp;
                zero=zero->next;


             
                
            }if(temp->data == 1){
                one->next=temp;
                one=one->next;

            }if(temp->data == 2){
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        
       
        zero->next=onehead->next;
        one->next=twohead->next;

        return zerohead->next;

    }
    Node* pali(Node* head){
            Node* fast=head;
            Node* slow=head;
            
        while(fast->next!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }


        Node* prev =slow;
        Node* temp=prev->next;
        // while(temp->next!=NULL){
        //     Node* rev=temp->next;
        //     temp->next=prev;
        //             prev=temp;
        //             temp=rev;  

        // }
        
        
        // print(prev);

            

    }
        




int main(){
        
    vector<int> v={1,2,3,4,5,6};
       Node* head=inserted(v);
       head=pali(head);
    //    print(head);

    //    del(head,2);
    //    print(head);
   
// ***dont ever temper with head never  also create temp one ** 



       // this is also a way to print it
    //    while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    //    }

    // head=ins(head,1,1);
    // print(head);
    


}