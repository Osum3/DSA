#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++)
   {
    cin>>vec[i];
   }
   multimap<int,int> mp;
   vector<int> check(n,1);

   for(int i=0;i<n;i++)
   {
      auto it=mp.upper_bound(vec[i]);
      if(it!=mp.end())
      {
        
         check[it->second]=0;
         mp.erase(it);
      }
      mp.insert({vec[i],i});

   }
   int cnt=0;
   for(int i=0;i<check.size();i++)
   {
      cnt+=check[i];
   }
   cout<<cnt<<endl;


   }

