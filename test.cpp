#include<iostream>
#include<vector>
#include<array>
using namespace std;
#include<deque>
#include<list>
#include<set>


// bool leftbinary(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;
//     int c=0;
//     while(start<=end){
//         if(arr[mid]==key){
//             int temp=mid;
//             if(arr[mid-1]==key){
//                 end=mid-1;
//             }
//             else{
//             cout<<"left most index"<<temp<<endl;
//             break;}
//         }
//         else if(key>arr[mid]){
//                 start=mid+1;
                
//         }
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return false;
// }
// bool rightbinary(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             int temp2=mid;
//             if(arr[mid+1]==key){
//                 start=mid+1;
//             }
            
//             else{
//             cout<<"right most index"<<temp2<<endl;
//             break;}
//         }
//         else if(key>arr[mid]){
//                 start=mid+1;
                
//         }   
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         mid=(start+end)/2;
//     }
    
// }

// int main(){
//     int arr[]={0,1};
//     int size=(sizeof(arr)/4);
//     int key=2;
    
    

//     leftbinary(arr,size,key);
//     rightbinary(arr,size,key);


// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int len=sizeof(arr)/4;
//     int temp=0;
//     for(int i=0;i<len;i++){
//         int temp=arr[i+1];
//         if(i=(len-1)){            
//             arr[0]=temp;     
//             break;       
//         }
//         arr[i+1]=arr[i];
//     }
//     for(int i=0;i<len;i++){
//         cout<<arr[i]<<" ";
//     }
// } {rotating an array}
// int main(){
//     int arr[5]={3,4,5,1,2};
//     int len=sizeof(arr)/4;
//     int s=0;
//     int e=4;
//     int mid= s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
         
//     }
//     cout<<" "<<s-1;

// }
int main(){
    vector<int> arr={2,4,0,1,3,18};
    int n=6;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
        
    }
    // cout<<n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
 

}