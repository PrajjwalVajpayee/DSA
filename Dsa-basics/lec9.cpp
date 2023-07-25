#include <iostream>
using namespace std;
// int getMax(int num[], int n){
//     int max = INT32_MIN;

//     for(int i=0; i<n; i++ ){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
// }
// int getMin(int num[], int n){
//     int min = INT32_MAX;

//     for(int i=0; i<n; i++ ){
//         if(num[i]<min){
//             min=num[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int size;
//     int num[100];
//     for (int i = 0; i < size; i++)

//     {
//        cin>>num[i];
//     }
//     cout<<"maximum value is:"<<getMax(num,size)<<endl;
//     cout<<"minimum value is:"<<getMin(num,size)<<endl;

// }
// void update(int arr[], int n)
// {
//     cout << "INSIDE THE FUNC" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << "";
//     }
//     cout << endl;
//     cout << "going back to main" << endl;
// }
// int main()
// {
//     int arr[3] = {1, 2, 3};
//     update(arr, 3);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << endl;
//     return 0;
// }
// bool search(int arr[],int size, int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==key)
//         {
//             return 1;
//         }
        
//     }
//     return 0;
// }
// int main (){
//     int arr[10]={5,7,2,3,4,8,55,9,21};
//     int key;
//     cin>>key;
//     bool found= search(arr,10,key);
//     if(found){
//         cout<<"KEY IS PRESENT"<<endl;
//     }
//     else{
//         cout<<"KEY IS ABSENT"<<endl;
//     }    

//     }
//  void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
//  void reverse(int arr[],int n){
//     int start =0;
//     int end=n-1;
//     while (start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
//  }
//  int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int brr[5]={5,4,3,2,1};
//     reverse(arr,6);
//     reverse(brr,5);
//     printArray(arr,6);
//     printArray(brr,5);
//     return 0;
//  }
int main(){
int A,B,C;
cin>>A>>B;
cin>>C;
C=B-A;
if (C==B-A)
{
    return 1;
    }
else{
    return 0;
}    

}

