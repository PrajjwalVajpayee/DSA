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
    int main(){
         int a,b;
         //cin>>a>>b;
     cout<<"the SOrted Array is"<<gcd(72,24);
     }

