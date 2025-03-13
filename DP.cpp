#include<iostream>
#include<vector>
#include <limits.h>
#include<math.h>

using namespace std;

// memorization of the fibonacci series
// int f(int n,vector<int>& dp){
//             if(n==1){
//                 return 1;
//             }
//             if(n==0){
//                 return 0;
//             }
//             if(dp[n]!=-1)return dp[n];
//             return dp[n]=f(n-1,dp)+f(n-2,dp);
// }


// fibbonaci by tablulation
// dp[0]=0; dp[1]=1;
// for(int i=2;i<=4;i++){
//     dp[i]=dp[i-1]+dp[i-2];
// }
// cout<<dp[dp.size()-1];


// optimize the space complexity of the tabulation
// prev2=0; prev1=1;
// int ans=0;
// for(int i=2;i<=4;i++){
//  ans=prev1+prev2;
// prev2=prev1;
// ans=prev1;
// }
// cout<<ans;

int recr(vector<int>& arr,vector<int>& dp,int n,int k){
    if(n<=0){return 0;}

    if(dp[n]!=-1)return dp[n];
        int mini=INT_MAX;
    for(int i=1;i<=k;i++){
        int lol=recr(arr,dp,n-i,k)+abs(arr[n]-arr[n-i]);

        mini=min(mini,lol);
    }
    return dp[n]=mini;

}

void solve(vector<int>& nums,int sum,int& target,int index,vector<int> vec){
    if(index>=nums.size()){
               for(auto v:vec){
        cout<<v<<" ";
      }
      cout<<endl;
      return;
    }
    if(sum==target){
     
      cout<<"found"<<endl;;
    //   return;
    }
  
    vec.push_back(nums[index]);
    sum+=nums[index];
    solve(nums,sum,target,index+1,vec);
    sum-=nums[index];
    vec.pop_back();
    solve(nums,sum,target,index+1,vec);

}


int main(){

vector<int> nums={1,2,2,3};
int target=4;
vector<int> temp;
solve(nums,0,target,0,temp);
    


}