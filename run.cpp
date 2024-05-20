#include<iostream>
using namespace std;
#include<vector>




int main(){
    int arr[]={0,1,0,0,1,1,0,1,0};
    int size=sizeof(arr)/4;
     
    int beg=0;
    int end=size-1;
    while(end>=beg){
        if(arr[beg]<arr[end]){
            beg++;
            end--;
            
            
        }
        else if(arr[beg]>arr[end]){
            swap(arr[beg],arr[end]);
            beg++;
            end--;
            

        }
        else {
            if(arr[beg]+arr[end]==0){
            beg++;}
            else{
                end--;
            }

        }
    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
   
            

        }
    

    


