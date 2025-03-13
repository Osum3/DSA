#include<iostream>
#include<vector>

using namespace std;

string bit(int n){

}
        // number to binaary in a string and in last reverse it
        // int n=10;
        // string ans="";
        // while(n!=1){
        //     if(n%2==1)ans+='1';
        //     else ans+='0';
        //     n=n/2;
        // }
        // cout<<ans;

    // int ans=13>>1;   6

// check the ith bit of a number is zero or not 

//     int n=13;
//     int one= 1<<2;   1<<1=2 ; 1<<2=4
//     int check=one&n;
//     cout<<check<<endl;
//     if(check!=0){
//         cout<<"YES";
//     }
//     else{
// cout<<"no";
//     }

int main(){
int n=15;
int count=0;
int i=1;
while(i<16){
    if(n&(1<<i)){
        count++;
        if(count>1){
            cout<<"NO";
            break;
        }
    }
    i++;
}
if(count==1){
    cout<<"YES";
}

// for(int i=0;i<16;i++){
//     int num=1<<i;
//     if(num&(1<<i)!=0){
//         cout<<"reached";
//             n=n^(1<<i);
//             cout<<n;
//             break;
//     }
// }
// int ans=n^(1<<1);



}
 