// #include<iostream>
// using namespace std;
// int firstoccurence(int arr[],int size,int key){
//    int start=0;
//     int end =size-1;
//     int mid= start+(end-start)/2 ;
//    int ans=0;
//     while(start<=end){
//        if(arr[mid]==key){
//           ans=mid;
//          end=mid-1;
//        }
//         else if(arr[mid]<key)
//           start=mid+1;
//         else if(arr[mid]>key)
//         end = mid -1;
//  mid= start+(end-start)/2;
//     }
//   return ans;
// }
// int lastoccurence(int arr[],int size,int key){
//    int start=0;
//    int end =size-1;
//    int mid= start+(end-start)/2 ;
//    int ans=0;
//    while(start<=end){
//       if(arr[mid]==key){
//          ans=mid;
//         start=mid+1;
//       }
//        else if(arr[mid]<key)
//          start=mid+1;
//        else if(arr[mid]>key)
//        end = mid -1;
// mid= start+(end-start)/2;
//    }
//  return ans;
// }
//  int main(){
//     int even[6]={1,2,3,3,3,6};
//     int  index_1=firstoccurence(even,6,3);
//     int index_2=lastoccurence(even,6,3);
//    cout<<firstoccurence(even,6,3)<<endl;
//    cout<<lastoccurence(even,6,3)<<endl;
//  }
//  //    no of occurence:
// #include<iostream>
// using namespace std;
// int firstoccurence(int arr[],int size,int key){
//    int start=0;
//    int end =size-1;
//    int mid= start+(end-start)/2 ;
//    int ans=0;
//    while(start<=end){
//       if(arr[mid]==key){
//          ans=mid;
//         end=mid-1;
//       }
//        else if(arr[mid]<key)
//          start=mid+1;
//        else if(arr[mid]>key)
//        end = mid -1;
// mid= start+(end-start)/2;
//    }
//  return ans;
// }
// int lastoccurence(int arr[],int size,int key){
//    int start=0;
//    int end =size-1;
//    int mid= start+(end-start)/2 ;
//    int ans=0;
//    while(start<=end){
//       if(arr[mid]==key){
//          ans=mid;
//         start=mid+1;
//       }
//        else if(arr[mid]<key)
//          start=mid+1;
//        else if(arr[mid]>key)
//        end = mid -1;
// mid= start+(end-start)/2;
//    }
//  return ans;
// }
//  int main(){
//     int even[6]={1,2,3,3,3,6};
//     int  index_1=firstoccurence(even,6,3);
//     int index_2=lastoccurence(even,6,3);
//    cout<<firstoccurence(even,6,3)<<endl;
//    cout<<lastoccurence(even,6,3)<<endl;
//    int total=(index_2-index_1)+1;
//    cout<<total;
//  }
//    PEAK OF A MOUNTAIN:

// #include <iostream>
// using namespace std;
// int peak(int arr[], int size)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;
//     while (s < e)
//     {
//         if (arr[mid] < arr[mid + 1])
//             s = mid + 1;
//         else if (arr[mid] > arr[mid + 1])
//             e = mid;

//         mid = s + (e - s) / 2;
//     }
//     return arr[s];
// }
// main(){
//     int even[6]={1,3,5,4,2};
//     cout<<peak(even,6);
// }
//          PIVOT IN AN ARRAY:
// #include<iostream>
// using namespace std;
// int pivot(int arr[],int size)
// {
//     int s=0,e=size-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]>-arr[0])
//         s=mid+1;
//         else
//         e=mid;
//     mid=s+(e-s)/2;
//     }
//     return s;
// }
// int main(){
//     int even[6]={2,5,3,6,36,1};
//     cout<<pivot(even,6);
// }
//             SQRT USING BINARY SEARCH:
#include <iostream>
using namespace std;
//  this part is for the integer part
int root(int k)
{
    int start = 0, end = k;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (mid * mid == k)
        {
            return mid;
        }
        if (mid * mid < k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (mid * mid > k)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
// this part is for the decimal value :
double precision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int k;
    cin >> k;
    int x = root(k);
    cout << "the root is " << precision(k, 3, x);
    return 0;
}