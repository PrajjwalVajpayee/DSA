#include<bits/stdc++.h>
using namespace std;
//           :BUILDING A HEAP STRUCTURE:
class heap{
public:
int arr[100];
int size;
heap(){
    arr[0]=-1;
    size=0;
}
void insert(int val){
   size=size+1;
   int index=size;
   arr[index]=val;
   while(index>1){
    int parent=index/2;
    if(arr[parent]<arr[index]){
        swap(arr[parent],arr[index]);
    }
    else{
        return ;

    }
   }
}
void print(){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void deletefromheap(){
    if(size==0){
        cout<<"heap is empty";
        return ;
    }
    //  1st STEP
    arr[1]=arr[size];
    size--;
    int i=1;
    while(i<size){
        int leftindex=2*i;
        int rightindex=2*i+1;
        if(leftindex<=size && arr[i]<arr[leftindex] && arr[leftindex]>arr[rightindex]){
            swap(arr[i],arr[leftindex]);
            i=leftindex;
        }
       else if(rightindex<=size && arr[i]<arr[rightindex] && arr[rightindex]>arr[leftindex]){
            swap(arr[i],arr[rightindex]);
            i=rightindex;
        }
        else{
            return ;
        }

    }
}

};
void heapify(int arr[],int n,int i){
 int largest=i;
 int left=  2*i;
 int right=2*i+1;
  if(left<=n && arr[largest]<=arr[left]){
    largest=left;
  }
  if(right<=n && arr[largest]<=arr[right]){
    largest=right;
  }
  if(largest!=i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
  }
}
//           :HEAP SORT:
void heap(int arr[],int n){
    int t=n;
    while(t>1){
        swap(arr[t],arr[1]);
        t--;
       heapify(arr,t,1); 
    }

}
int main(){

}