#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> a={1,2,3,0,0,0};
    vector<int> b={2,5,6};

    int i=0;int j=0;
    int m=3; int n=3;
    while(i<3 && j<n){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            swap(a[i],b[j]);
            i++;j++;
        }
        else{
            i++;
        }
    }
    while(j<n){
        a.push_back(a[j]);
        j++;
    }
    int (int j=0;j<a.size();j++){
        cout<<a[j]<<" ";
    }

}