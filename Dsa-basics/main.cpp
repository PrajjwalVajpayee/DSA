/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int i=57;
      i=++i;
      cout <<"the no is pre  increment by one"<<i<<endl;
      --i;
      cout <<"the no is pre decremnt by one"<<i<<endl;
      return 0;
}*/
#include<iostream>
using namespace std;

// int main(){
    
//     cout<< "hello world";
    
// }
int sort(int a[],int n){
    for (int i = 0; i <=n-1; i++)
    {
        int Index=i;
        for (int  j = 0; j < n; j++)
        {
            if (a[j]<a[Index])
            {
                j=Index;
            }
            
        }
        swap(a[Index],a[i]);
    }
}
int gcd(int a,int b){

    if (a==0)
    return b;
    if(b==0)
    return a;
    while (a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    
    return a;
}
    
bool binarysearch(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if (arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarysearch(arr,s,mid-1,k);
    }
    else{
        return binarysearch(arr,mid+1,e,k);
    }
}
void sortarray(int *arr,int n){
    if(n==0 || n==1){
        return ;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        
    }
    sortarray(arr,n-1);
}
int power(int a,int b){
    if(b==0)
    return 1;
    if(b==1)
    return a;
    int ans=power(a,b/2);
    if(b%2==0)
    return ans*ans;
    else
    return a*ans*ans;
}
//            :MERGE SORT:
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int [len1];
    int *second=new int[len2];
    int k=s;
    for (int i = 0; i < len1; i++)
    {
        first[i]=arr[k];
    }
    k=mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]=arr[k];
    }
    int index1=0;
    int index2=0;
    while (index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
           arr[k++]=first[index1++];
        else
            arr[k++]=second[index2++];   
    }
    while (index1<len1)
    {
        arr[k++]=first[index1++];
    }
     while (index2<len2)
    {
        arr[k++]=second[index2++];
    }
}
void mergesort(int *arr,int s,int e){
  if(s>e)
  return ;
  int mid=s+(e-s)/2;
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);
}
int main(){
    int arr[5]={2,9,4,1,8};
    mergesort(arr,0,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<' ';
    }
    
}