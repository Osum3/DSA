#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class parent{
   public :
   
    virtual void virtualexample (){
        cout<<"chutiya h kya"<<endl;
    }
};

class child : public parent{
    public:
    void virtualexample(){
        cout<<"tu hoga chutiya"<<endl;
    }
};


int main(){
   int arr[5];
//    for(int i=0;i<5;i++)cout<<arr[i]<<endl;
   cout<<arr[10]<<endl;
 

          
}
