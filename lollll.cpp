#include<iostream>
using namespace std;
#include<vector>

// time complexity o(nlogn)
// caus binary search ki tarah array ko divide krte jate h jab tk base condition true nhi ho jati h which is array further divide hone band hojegi
// BC mujhe khud smjh nhi aa rha chhodo bc
void mergesort(vector<int> &arr, int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int index1=0;
    int index2=0;
    int k=s;

    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
     k=mid+1;
            for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

     k=s;
    while (index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{ arr[k++]=second[index2++];}
    }
    while(index1<len1){
        arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=second[index2++];
    }


}

void   sorted(vector<int> &arr, int s,int e){
   if(s>=e){
    return ;
   }

   int mid = (s+e)/2;

   sorted(arr,s,mid);

   sorted(arr,mid+1,e);
mergesort(arr, s ,e );


}

int main(){
    vector<int> arr={3,4,2,1,5};
   int  j=arr.size()-1;
   int i=0;
   sorted(arr,i,j);
   for(int i=0;i<=j;i++){
    cout<<arr[i];
   }

    
}