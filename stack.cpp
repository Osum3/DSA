#include<iostream>
#include<stack>
#include<array>
using namespace std;

class stk{
    public:
    int *arr;
    int top;
    int size;

        stk(int size){
            this->size=size;
            arr=new int[size];
            top=-1;
        }
        void push(int ele){
                if(size-top > 1){
                    top++;
                    arr[top]=ele;
                }
                else{
                    cout<<"stack overflow";
                }
        }
        void pop(){
            if(top>-1){
                 top--;
            }
             else{
                    cout<<"stack overflow";
                }
        }
        int peek(){
            if(top!=-1 && top<size){
                return arr[top];
            }
            else{
                cout<<"empty";
                return false;
            }
        }
        bool isempty(){
            if(top==-1){
                return true;
            }
            return false;
        }

  

  
};

int main(){
       stk s(5);
       s.push(5);
       s.push(3);
       s.push(6);
       s.push(0);
       s.isempty();

}