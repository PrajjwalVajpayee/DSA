#include<iostream>
using namespace std;
#include<vector>
 /*int main(){
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
            b[i][k]=a[i][x];
        }
        x--;k++;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    

}
*/

int max_of_four(int a,int b,int c,int d){
  if (a>b && a>c && a>d)
  {
    return a;
  }
  else if (b>a && b>c && b>d)
  {
    return b;
  }
  else if (c>a && c>b && c>d)
  {
    return c;
  }
  else{
    return d;
  }
}
int main(){
  int a,b,c,d;
  
  cin>>a;
  cin>>b;
  cin>>c;
  cin>>d;
  int ans=max_of_four(a,b,c,d);
  cout<<ans;
}