#include <iostream>
using namespace std;
#include<vector>

bool check( vector<int> name,int n,int k, int mid){
        int sum=0;
        int count=1;
        for(int i=0;i<n;i++){
            if(sum+name[i] <= mid){
                sum+=name[i];
            }
            else{
                count++;
                if(count>k || name[i]>mid){
                    return false;
                }
                sum=name[i];
            }
        }
        return true;
}

int main(){
//  vector<int> name{2, 1, 5, 6, 2, 3};
// int k=2;

// int start=0;
// int n=name.size();
// int end=0;
// for(int i=0;i<name.size();i++){
//         end+=name[i];
// }

// int mid=(start+end)/2;
// int ans=-1;
// while(start<=end)
// {
//     if (check(name,n,k,mid)){
//         ans=mid;
//         end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//     mid=(start+end)/2;

// }
// cout<<ans;
// vector<int> ans;
// vector<int> arr1={0,1,3,12,0,0,1,8};
// int n=arr1.size();
// for(int i=0;i<n-1;i++){
//     int a=arr1[i];
//     for(int j=i;j<n-1-i;j++){
//         if(arr1[j]==0){
//             swap(arr1[j],arr1[j+1]);
//         }
        
//     }
    
// }
// for(int i=0;i<n;i++){
//     cout<<arr1[i]<<" "; 
    
// }
// cout<<endl;

    // vector<int> a{1};
    // vector<int> b{};

    // int i=0;int j=0;
    // int m=1; int n=0;
    // while(i<3 && j<n){
    //     if(a[i]<b[j]){
    //         i++;
    //     }
    //     else if(a[i]>b[j]){
    //         swap(a[i],b[j]);
    //         i++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
   
    // while(j<n){
    //     a[i]=b[j];
    //     i++;
    //     j++;
    // }
    // for (int j=0;j<a.size();j++){
    //     cout<<a[j]<<" ";
    // }
vector<int> v1 = {1, 2, 3, 4, 5,6};
vector<int> v2 = {1, 2, 3, 4, 5};
vector<int> ans;
int m=max(v1.size(),v2.size());
int n=min(v1.size(),v2.size());

cout<<m<<endl;
int carry=0;
for(int i=4;i>=0;i--){
 int sum=0;
 sum=v1[i]+v2[i];
 if(sum>=9){
    int lol=sum-10;
    ans[i]=lol;
    carry=1;
 }
 else{
    ans[i]=sum;
    carry=0;
 }
}
if(carry!=0){
    ans.insert(ans.begin(),1);
}

  

  // Print the vector
  for (int k = 0; k < ans.size(); k++) {
    cout << ans[k] << " ";
  }

  







// int arr2[3]={2,5,6};
// int len2=3;
// int len1=5;

// int m=3;
// int n=3;

// int i=0;
// int j=0;

// while(i<3 && j<3){
//     if(arr1[i]<arr2[j]){
//         i++;
//     }
//     else  if(arr1[i]>arr2[j]){
//         swap(arr1[i],arr2[j]);
//         i++;
//     }
//     else{
//         swap(arr1[i+1],arr2[j]);
//         i++; 

//     }
// }


 
//  while(j<3){
//      arr1[j]=arr2[j];
// j++;
//  }

// for(int j=0;j<ans.size();j++){
//     cout<<ans[j]<<" ";
// }


}