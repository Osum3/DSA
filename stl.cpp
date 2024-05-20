#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
// g++ file name with extension
// a.exe then hit tab and press enter

//PAIR    
    // // pair - to make relation between two things
    // {// there are not stored in continues memory location like array
    //
    //in it only i++ work not i=i+1 cauz maps are not stored in continous memory location
    //
    // pair<int,int> p;
    // p={2,3};
    // // cout<<p.first<<" "<<p.second;
    // p=make_pair(2,6);
    // // cout<<p.first<<" "<<p.second;
    // pair<int,int> /*&=to store refrence so that original thing is placed*/p1=p;
    //     // [1,2,3,]
    //     // ['a','b','c']
    // pair<int,char> ch[4];
    // ch[0]={1,'a'};
    // ch[1]={2,'b'};
    // ch[2]={3,'c'};
    // for(int i=0;i<4;i++){
    //     cout<<ch[i].first<<" "<<ch[i].second;
    //     cout<<endl;
    // }
    // }

    
//VECTOR
    // vector a basic dynamic array whose size is changeable
    // locally it can store upto 10^5 size and globally 10^7 size only
    // vector<int> v;
    // vector<int> v(5); pushback krne pr 6th index se elemet add krega
    // vector<int> v(5,0);
    // v.push_back(2);   TC==O(1)
    // v.push_back(3);
    // v.pop_back()
    // vector<int> v1=v   TC==O(n);
    // vector<int> p(4,0);
    // vector<int> &p1=p;
    // p1.push_back(23);
    // for(int i=0;i<p1.size();i++){
    //     cout<<p1[i];        
    // }
    // cout<<endl;
    //  for(int i=0;i<p.size();i++){
    //     cout<<p1[i];        
    // }

 // VECTOR OF ARRAY 
 //vector ke hr index pr ek array create ho jayengi Jisme m kistnbhi elemt daal skta hu
 // vector<int> a[2];  {  {}  {} } 
// //  isme no of vector constant h like is case m 2 h
// bt no of element inside a vector is dynamic    kind of a 2-D array
// vector<int> a[5];
//         a[1].push_back(2);
//         a[1].push_back(3);
//         a[0].push_back(3);
//         a[3].push_back(3);
//
// cout<<a[1][1];  ->> 3
// cout<<a[1][0];  ->>2


// VECTOR OF VECTOR
// ITHIS IS SAM AS VECTOR OF ARRAY 
//BUS DIFFERENCE ITNA H KI M EK VECTOR K ANDR 
// HR INDEX PR KITNE BHI SIZE KA VECTOR BAN SKTA HU {SIMPLE}
//KITNI BHI VECTOR CREATE KR SKTA HU
// BI IN VECTOR OF ARRAY M KITNE VECTOR BNA SKTA HU VO FIX HO JATA H
// VECTOR<INT> V[2];
//
//VECTOR<VECTOR<INT>> V; 
//
//
//
//
//
//


//ITERRATOR
//IT IS A POINTER TO THE FIRST LOCATION OF CONTAINER
// MAPS SET ARE NOT OF CONTINOUS MEMORY LOCATION inme na indexing ka nhi hoti h
// THAT WHY IT IS USED
// vector<int> v={1,2,3,4,5,6,7,8,9};
// vector<int> :: iterator i=v.end()-1; << 9
// vector<int> :: iterator i=v.begin(); << 1
// 
//  
//
// vector<int> v={1,2,3,4,5,6,7,8,9};
// vector<int> :: iterator i=v.end()-1; 
//
// cout<<*i<<endl;
//iterator io case of pair
//vector<pair<int ,int>> p={{2,4},{3,6},{7,9}};
//  vector<pair<int ,int>> :: iterator j;
//  cout<<(*j).first<<" "<<(*j).second;
// for(j=p.begin();j!=p.end();++j){
//         cout<<(*j).first<<" "<<(*j).second;
//         cout<<endl;
// }
// cout<<p[0].first<<" "<< p[0].second;
//

// AUTO code in short cpp version 11 se baad k liyr
//
// finally loop ko short m likhne k tarika mil gya ehehehehehehhe
// range based loop
// vector<int> a={1,2,3,4,5,6,7};
// isme values ki copy jati h na ki origianl values
//  for(int value:a){
//     cout<<value;
// }
//
// isme reference variable create krte ho jo us valueko point krta h isme change krne pr original m change aayega
// for(int &value:a){
//     value++;
// }
// cout<<a[0];
// for(pair<int,int> value:p){
//     cout<<value.first<<" "<<value.second;
//     cout<<endl;
// }
//
//
// AUTO bhai sahab dynamically datatype le leta h
// vector<pair<int ,int>> p={{2,4},{3,6},{7,9}};
//  vector<pair<int ,int>> :: iterator j;  >>>>> AUTO se to iski jarurat khatam ho jati h
// for(auto val:p){
//     cout<<val.first<<" "<<val.second;
//     cout<<endl;
// }

//MAP
// it stores a key and its value 
// key is unique 
// it is not continous memory location like continous memory location
// ordered map in sorted ordered m values store hot h 
// keys ki value se sor hoti h
//  map<int,int> m;
//  m.insert({9,8});
//  m[-1]=8;  m[1]=3; m[2]=9; /*TC==O(log n)*/
//  m[3]=6; m[4]=3;   m[5]=5;
// 
// for(auto i:m){
//     cout<<i.first<<" "<<i.second;
//     cout<<endl;
// }
// m.erase(3);
// auto c=m.find(-1);
// cout<<(*c).first<<(*c).second;

// unordered map ki time complexity km hoti h s try to use them
// isme insertion ki time complexity O(1) hoti h
// iska implementaion hash table se hota h
// pair ki inbuilt hash functin nhi hota 
// so only CAN'T be used for(set vector pair) cauz inka hash function internally defined nhi hota

// unordered_map<char,int> m;
// cout<<"no of strings to add : ";
// int n;
// cin>>n;
// while(n!=0){
// char val ;
// cin>>val;
// m[val]++;
// n--;
// }
// for( auto val:m){
//     cout<<val.first<<" "<<val.second;
//     cout<<endl;
// }
// long long a=23;


