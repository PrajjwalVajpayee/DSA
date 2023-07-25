#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
int fact(int n){
    if (n==1 && n==0)
        return 1;
    return n*fact(n-1);
}

int main(){
int a;
cin>>a;
int ans=fact(a);
return ans;
}
// int main(){
//     int r=5,w=0;
//     int ans=0;
//    cout<< (r>w)? "fuck you":"fuck you too";
     
// }