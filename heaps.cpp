#include <iostream>
using namespace std;
#include<vector>
 
class heap{
        public:
        int arr[100];
        int size;

        heap(){
             size=0;
            arr[0]=-1;
        }   
        void insert(int val){
            size=size+1;
            int index=size;
            arr[index]=val;

            while(index>1){
                int parent=index/2;
                if(arr[parent] < arr[index]){
                    swap(arr[index],arr[parent]);
                    index=parent;
                }
                else{
                    return;
                }
            }
        } 
        void del(){
            arr[1]=arr[size];
            size--;
            int index=1;
            while(index>0){
                    int left=2*index;
                    int right=2*index+1;

                    if(left<size && arr[left] > arr[index]){
                        arr[left]=arr[index];
                    index=left;
                    }
                    else if(right<size && arr[right] > arr[index]){
                        arr[right]=arr[index];
                    index=right;

                    }
                    else{
                        return ;
                    }

            }
        }
        
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
        }
};
void heapify(vector<int> & arr,int size,int i){
            int left=2*i;
            int right=2*i + 1;
            int largest=i;
            if(left < size && arr[largest] > arr[left]){
                largest=left;
            }
            if(right < size && arr[largest] > arr[right]){
                largest=right;
            }

            if(largest!=i){
                swap(arr[i],arr[largest]);
                heapify(arr,size,largest);
}
            else{

            return ;
            }

        }




int main() {
    vector<int> arr={-1,8,2,3,4,5};  
    int size=6;
    for (int i=size/2 +1 ;i>=1;i--){
        heapify(arr,size,i);
    }
    int n=5;
    //heap sort
     while(n>1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);

     }

     for(int i=1;i<arr.size();i++){
                cout<<arr[i]<<" ";
            }
 

 
//  h.print(); 
 
 
}
 
    
