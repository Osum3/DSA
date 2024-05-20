#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ch = char;
using st = string;
using vi = vector<int>;
using vl = vector<long long>;
using vvi = vector<vector<int>>;
 
#define umap        unordered_map
#define uset        unordered_set
#define pb          push_back
#define all(x)      (x).begin(), (x).end()
#define desc        greater<int>()
#define yes         cout << "YES\n";
#define no          cout << "NO\n";
#define el          cout << '\n';
#define rr          return;
 
/*-----------------------------------------------------*/
int M=1e9+7;
int po(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int inv(int x){ return po(x,M-2,M);}
int add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mult(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int div1(int x, int y){ return mult(x,inv(y),M); }
/*-----------------------------------------------------*/
// DONT FUCKING OVERTHINK, LOOK FOR PATTERN / SIMPLE TRICK
/*-----------------------------------------------------*/
 
void print(vi &v){ for(auto x : v){cout << x << ' ';} el}
 
void solution()
{
 
   
 
  long size;
  cin>>size;  
   cout<<endl;
 int element;
  vector<int> arr1;
  for(int i=0;i<size;i++){
    cin>>element;
    arr1.push_back(element);
    
  }  
  int times=0;
  int old_size=size-2;

  for(int i=0;i<(size);i++)  {
      times=times+i;
  }
// cout<<times;
 


  



   int j=0;
  while(times>0){
    int  XOR=arr1[j]^arr1[j+1];
      arr1.push_back(XOR);
      if(j==old_size){
        j=j+2;
        old_size--;
        times--;
      }
      else{
      j++;
      times--;}
  }
  int ans=arr1.back();
  cout<<ans;
 

}
 
int32_t main()
{
    int tc=1;
   
    // cin >> tc;
 
    while(tc--)
    {
        solution();
    }
}