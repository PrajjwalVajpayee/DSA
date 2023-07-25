#include<bits/stdc++.h>
using namespace std;
// class gappoche{
//     private:
//     string name;
//     int age ;
//     int height;
// };
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    for (int  i = 0; i < n; i++)
    {
         getline(cin,s);
    }
    
    //  getline(cin,s);
     for (int  i = 0; i < n; i++){
        cout<<s[i];
     }

}