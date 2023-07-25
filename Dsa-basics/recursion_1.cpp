#include<bits/stdc++.h>
using namespace std;

// int pow(int n){
//     if(n==0)
//     return 1;
//    return 2*pow(n-1); 
// }
// int fact(int n){
//     if (n==1 && n==0)
//     {
//         return 1;
//     }
//     return n * fact(n-1);
// }
  
//                  REVERSE USING RECURSION:

// void reverse(string& s,int i,int j){
//   if (i>j)
//    return ;
//    cout<<s<<endl;
//     swap(s[i],s[j]);
//     i++;
//     j--;
//     reverse(s,i,j);
// }

//                  USING RECURSION:PALINDROME 

// bool checkpalindrome(string s,int i, int j){
//   if(i>j)
//   return true; 
//   if(s[i]!=s[j])
//      return false;
//      else
//      return checkpalindrome(s,i++,j--);
// }

//             POWER USING RECURSION:

// int power(int a,int b){
//   if(b==0)
//   return 1;
//   if(b==1)
//    return a;
//    int ans=power(a,b/2);
//    cout<<a<<" "<<b<<endl;
//    if(b%2==0)
//    return ans*ans;
//    else 
//    return a*ans*ans;
// }

 //             BUBBLE SORT USING RECURSION:

// void sort(int* a,int n){
//   if(n==0 || n==1){
//     return ;}
//     for (int i = 0; i < n; i++)
//     {
//     if(a[i]>a[i+1])
//        swap(a[i],a[i+1]);
//     }
//     sort(a,n-1); 
// }

