
/*void Rowsum(int arr[3][3],int row,int col){
 cout<<"Printing the sum:";
for (int row = 0; row < 3; row++)
{
 
  int sum=0;
  for (int col = 0; col< 3; col++)
  {
   sum+=arr[row][col];
  }
  cout<<sum<<" ";
}
cout<<endl;
}
void Colsum(int arr[3][3],int row,int col){
 cout<<"Printing the sum:";
for (int col = 0; col < 3;col++)
{
 
  int sum=0;
  for (int row = 0;  row<3; row++)
  {
   sum+=arr[row][col];
  }
  cout<<sum<<" ";
}
cout<<endl;
}
void Largestrowsum(int arr[3][3],int row,int col){
int maxi=0;
int Index=0;
for (int col = 0; col < 3;col++)
{
 
  int sum=0;
  for (int row = 0;  row<3; row++)
  {
   sum+=arr[row][col];
  }
  if (maxi<sum)
  {
   maxi=sum;
   Index=row;
  }
  
}
 cout<<"The Fucking Largest Index is "<<Index;
}
void wavearray(int arr[3][3],int row,int col){
 for (int j = 0; j < col; j++)
 {
   if (j&1)
   {
      for (int i = row-1; i>=0; i--)
      {
         cout<<arr[row][col]<<" ";
      }
      
   }
   else{
          for (int i =0; i<row; i++)
      {
         cout<<arr[row][col]<<" ";
      }
      
   }
   cout<<endl;
 }
   
}

int main(){
    int arr[3][3];
    for (int i = 0; i <3; i++)

    {
       for (int  j = 0; j < 3; j++)
       {
        cin>>arr[i][j];
       }
       
    }
   for (int i = 0; i <3; i++)

    {
       for (int  j = 0; j < 3; j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    } 
   //   Rowsum(arr,3,3);
   //    Colsum(arr,3,3);      
   //Largestrowsum(arr,3,3);
    wavearray(arr,3,3);
}*/
//  vector<int> Duplicate (vector<int> a,int n){
//     vector<int>ans;
//     int i=0;
//     for (int k = 0; k < n; k++)
//     {
//        int j=a[i];
//        if (j==a[k])
//        {
//          ans.push_back(j);
//        }
//        i++;
//     }
//     return ans;

//  }
//  int main(){
//  vector<int> a;
//  Duplicate(a,5);
//  }
#include<iostream>
using namespace std;
 int main(){
 int row,col,a[row][col],b[row][col];
  cin>>row>>col;
for ( int i = 0; i < row; i++)
{
  for ( int j = 0; j< col; j++)
  {
  cin>>a[i][j];
  }

}
//  for ( int i = 0; i < row; i++)
//  {
//    for ( int j = 0; j< col; j++)
//    {
   
//    cout<<a[i][j];
//    }
//  cout<<endl;
//  }
for ( int i = 0; i < row; i++)
{
  for ( int j = 0; j< col; j++)
  {
  b[i][j]=a[j][i];
  }
}
// for ( int i = 0; i < row; i++)
// {
//   for (int j = 0; j< col; j++)
//   {
//    cout<<b[i][j];
//   }
 
// }
int x=col-1,k=0;
    while(x>=0)
    {
        for(int i=0;i<row;i++)
        {
            a[i][k]=b[i][x];
        }
        x--;k++;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

}