#include<bits/stdc++.h>
using namespace std;
//           :CELEBRITY PROBLEM:
/*
bool knows(vector<vector<int>>&M,int a,int b,int n){
       if (M[a][b]==1){
        return true;
       }
       else{
        return false;
       }
}
int celebrity(vector<vector<int>>&M,int n){
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    s.push(i);
  }
    while (s.size()>1)
    {
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
          
        if(knows(M,a,b,n)){
            s.push(a);
        }  
        else{
            s.push(b);
        }
    }
    int candidate=s.top();
    
    int zerocount=0;
    for (int i = 0; i < n; i++)
    {
        M[candidate][i]==0;
        zerocount++;
    }
    if(zerocount==n){
        return true;
    }

    int onecount=0;
    for (int i = 0; i < n; i++)
    {
        M[i][candidate]==1;
        onecount++;
    }
    if(onecount==n-1){
        return true;
    }
    return candidate;
}
*/
//          : MAX AREA IN BINARY MATRIX WITH ALL 1's:
int Maxarea(int M[MAX][MAX],int n,int m){
    int area=largestrectanglearea(M[0],m); //ye function stack2 vali file se lena hai

}
int main(){
set<int> s;
s.insert(1);
s.insert(2);
int ans=s.begin();


}