#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     char arr[1];
//     cout<<"Enter your Name: ";
//     cin>>arr;
//     cout <<"your name is: "<<arr;
//     return 0;

// }
//     TO CHECK PALINDROME OR NOT:
// bool checkpalindrome(char arr[],int n){
//     int s=0,e=n-1;
//      while (s<=e){
//         if (arr[s]!=arr[e])
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }

//      }
//  return 1;
// }
// int getlength(char name[]){
//    int count =0;
//     for (int i = 0;name[i]!='\0'; i++)
//     {
//     count++;
//     }
//     return count;
// }
// int checklowercase(char ch){
//     if (ch>='a' && ch<='z')
//     {
//         return ch;
//     }
//     else{
//         char t=ch-'A'+'a';
//         return t;
//     }

// }
// int main (){
//     char palindrome[20];
//     cin>>palindrome;
//     int len=getlength(palindrome);
//       cout<<len<<endl;
//     cout<<checkpalindrome(palindrome,len);
// }
/* vector<int> leaders(int a[], int n){
    vector<int> ans;
        long long max=a[n-1];
        ans.push_back(max);
       for(int i = n-1;i>=0;i--){
           if(a[i]<=a[i-1]){
               if(a[i-1]>=max)
               {
                   max=a[i-1];
                   ans.push_back(max);
               }
            }
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
    int main(){
           int x[6]={16,17,4,3,5,2};
           leaders(x,6);
    }*/
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    while (count < total)
    {
        for (int i = startingCol; i <= endingCol && count < total; i++)
        {
            ans.push_back(i);
            count++;
        }

        startingRow++;
        // ending col
        for (int i = startingRow; i < endingRow && count < total; i++)
        {
            ans.push_back(i);
            count++;
        }
        endingCol--;
        for (int i = endingCol; i < startingCol && count < total; i++)
        {
            ans.push_back(i);
            count++;
        }
        endingRow--;
        for (int i = endingRow; i < startingRow && count < total; i++)
        {
            ans.push_back(i);
            count++;
            startingCol++;
        }
    }
    return ans;
}
vector<int> Rotate(vector<vector<int>> &matrix)
{
    