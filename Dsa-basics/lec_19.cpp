// #include<iostream>
// #include<vector>
// #include<stack>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     cout<<v.capacity();
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(4);
//     for (auto i :v)
//     {
//         cout<<i<<endl;

//     }

//     cout<<v.at(2);
//     cout<<v.size();
// }
// stack<string>s;
// s.push("love");
// s.push("myself");
// cout<<s.top();
// s.push("love");
//           REVERSE THE ARRAY:
#include <iostream>
#include <vector>
using namespace std;
// vector<int>reverse( vector<int>v, int n){
//     int s=n+1; int e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//      return v;

// }
// void printarray(vector<int>v){
//         for (int i = 0; i < v.size(); i++)
//         {
//         cout<<v[i]<<" ";
//         }
//         cout<<endl;
//      }
// int main(){
//     vector<int> v ,int n;
//     cin>>n;
//     v.push_back(11);
//     v.push_back(8);
//     v.push_back(7);
//     v.push_back(4);
//     v.push_back(2);
// vector<int> ans=reverse(v,1);

// printarray(ans);

// }
int merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}
int print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[9] = {0};
    int ans = merge(arr1, 5, arr2, 4, arr3);
    print(arr3, 9);
}