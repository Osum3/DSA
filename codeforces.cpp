#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

// dont fucking overthink bhai
// simple h question ->> thing something simple

  void solve()
  {
     //if equal then 0 
     // otherwise 1
      int n;
      cin>>n;
      int rem=n%(n/2);
      cout<<"rem->>>"<<rem<<endl;
      int x=n;
      n=n/2;
      n+=rem;
      for(int i=n;i>0;i--)
      {
        int val=x^i;
        if(val+x>i && val+i>x && i+x>val)
        {
          cout<<i<<endl;
          return ;
        }
      }
      cout<<-1<<endl;

    }

  int main()
  {
    int t;
    cin >> t;

    while (t--)
    {
      solve();
    }
  }
