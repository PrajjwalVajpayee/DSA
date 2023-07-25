
// int main(){
// int n,x[n];
// cin>>n;
// int max=x[0];
// for (int i = 0; i <5; i++)
// {
//   cin>>x[i];
// }

// for (int i = 1; i<n; i++)
// {
//    if (x[i]>max)
//    {
//     max=x[i];
//    }

// }
// cout<<max;

// int main(){
//      string s;
//      cin>>s;

//     for (char i = 0; i < s.length(); i++)
//     {
//        char a=s[i];
//        if (isupper(a))
//        {
//         s[i]=tolower(a);
//        }

//     }
//     cout<<s;

// }
// int main(){
//     int n,count=0;
//         map<int, int>m ;
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             m[a[i]]++;

//         }
//         for(auto i:m){
//             cout<<i.first<<" "<<i.second<<endl;
//             count++;
//         }
//         cout<<endl<<count;
// }
// #include <iostream>
// using namespace std;

// while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
//             arr[k++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[k++] = second[index2++];
//     }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
/*	int t;cin>>t;
	while(t--)
	{
		int N,K;cin>>N>>K;
		int a[N],sl[N],sr[N];
		int s1=0,s2=0;
		for(int i=0;i<N;i++)
		   {
			   cin>>a[i];
		   }
		  for(int i=0;i<K;i++)
		  {
			  sl[i]=0;sr[N-1-i]=0;
		  }
		  for(int i=0;i<K;i++)
		  {
			  for(int j=0;j<K;j++)
			  {
				  s1=s1+a[i+j];
				  s2=s2+a[N-1-i+j];
			  }
			  sr[i]=s1;sl[N-1-i]=s2;
			  s1=0;s2=0;
		  }
	   for(int i=K;i<N-1-K;i++)
	   {
		   for(int j=0;j<K;j++)
		   {
			   s1=s1+a[i+j];
			   s2=s2+a[i-j];
		   }
		   sr[i]=s1;sl[i]=s2;
		   s1=0;s2=0;
	   }
	   int s[(2*N)];
	   s[0]=sl[0];s[N+1]=sr[0];
	   for(int i=1;i<N;i++)
	   {
		   s[i]=sl[i];
		   s[N+i]=sr[i];
	   }
	   sort(s,s+(2*N));
	   cout<<s[(2*N)-1];

	}
	return 0;*/
// int i=32,j=0x20,k,l,m;
// k=j|j;
// l=i &j;
// m=i^j;
// cout<<i<<endl<<j<<endl<<k<<endl<<l<<endl<<m;
//    int t;
// cin>>t;
// while(t--){
//     int n,m;
//     cin>>n>>m;
//     int x,y;
//     cin>>x>>y;
//     char a[m];
//     map<char, int>m;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         m[a[i]]++;
//     }
// }
// return 0;
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int j=0,count=1;
// 	for (int& i = a[j]; i < n; )
// 	{
// 		if(i>=a[j+1])
// 		count++;
// 		else{

// 		}
// 	}

// }


/*int main()
{
	int n;
	cin >> n;
	int k;
	cin >> k;
	int a[n];
	for (int i = 0; i < n; i++)
		a[i] = 0;
	string s;
	string x;
	int co = 0;
	string ch = "CLOSEALL";
	for (int i = 0; i < k; i++)
	{
		getline(cin, s);
		if (s == ch)
		{
			for (int j = 0; j < n; j++)
				a[j] = 0;
		}
		else
		{
			for (int c = 0; c < n; c++)
			{
				x = "CLICK " + std::to_string(c + 1);
				if (s == x)
				{
					if (a[c] == 0)
						a[c] = 1;
					else
						a[c] = 0;
					break;
				}
			}
		}
		for (int k = 0; k < n; k++)
		{
			if (a[k] == 1)
				co++;
		}
		cout << co << endl;
	}
}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
	 cin>>t;
	 while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		int p=x*y;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		vector<int> right;
		vector<int> left;
		for (int i = 0; i < n; i++){
            

		}
	 }
	
}