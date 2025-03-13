 #include<iostream>
 using namespace std;
 #include<bits/stdc++.h> 

 int main(){
    //PAIR impleemtation 
    // it is class not data structure
        // not a contionuos memory allocation
    // pair<int,string> p;
    // p=make_pair(2,"abc");
    // p={1,"ayush"};
    // pair<int,string>& p1=p;
    // p.first=3;
    // cout<<p.first<<endl;
    // cout<<p1.first<<endl;


    // VECTOR
    //continuous memeory allocation
    // local vector is limit 10^5 and globally 10^7
    // array cannnot be copied like the vector



    // v.push_back()  and v.pop_back() O(1);
     // vector<int> v1=v : O(N) just like an array
    




    // Array of vector
    // vector<int> v[10];  10 vector is stored in a every index of the v array
    // vector<int> is a data type and 10 vector of size 10 is created

    // vector and vector

    // VECTOR OF PAIRS
    // vector<pair<int,int>> vp;
    // for( int i=0;i<10;i++){
    //     vp.push_back({i,i+1});
    // }
    // for( auto a: vp){
    //     cout<<a.first<<" "<<a.second<<endl;
    // }


    // ITERATOR
    // THEY ARE POINTER THAT IS POINTING TO ELEMENT OF DATA STRUCTURE ESPECIALLY IN THE NO CONTINOUS DATA STRUCTUE

    // vector<int> v={1,2 ,3,4};
    // AUTO IT=V.BEGIN( ) IT M 1 VALUE HAI
       
  // IT.end() ->> it is pointing to the next element of the last iterator

//   vector<int> :: iterator it=v.begin();
//   this is a standard way to intialise a vector 
//   first the data type then iterator then varialble then the first index of the iterator
 
/* manually inplementation of iterator

  vector<int> :: iterator it=v.begin();

  for( it ;it!=v.end();++it){
     cout<<(*it)<<" ";
  }
*/


/*
 !!!!very very important
 in loop [it+1] is point to the next memeory address of the current memory address this works in the case of vector because it is stored continously

  but but in case of map which is non continous in nature 
  onlt [it++] is used because the thing point to the next memory address of the data strucure

*/

/* 
AUTO and RANGE BASED LOOPS

after the c++ 11 version 
range based loop and auto keyword is introduced
dynamically data type determine kr leta hai
kya mast cheez hai bro!!!

*/
/*
MAP
map<int,char>mp;

mp[1]='a';  // O(Log(N))
mp[2]='b';
mp[3]='c';
mp.insert({4,'d'});
map<int,char> :: iterator it;
for( it=mp.begin() ;it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
insertion is acces both have a time complexity of log(n);

ERASE
 mp.erase(3); directly key ki vaalue O (Logn)
 mp.earse(iterator); iterarotr se   O (Logn)

[unordered_map]
1.time complexity of insertion is O(1); 
internally implemented by Hashtable of insertion and accessing sab k liye
2. unordered map ke case m complex datatype of key ki keys nhi bna skte cauz it is implented by hastable 
for ex pair to koi bhi inbulit hashfunction nhi hota
  only normal data type can be used in keys in U_maps basic data type
but in case of ordered map they worked on the  basic of comparision
multimap ke case m multi values of the keys can be stored
*/



 }