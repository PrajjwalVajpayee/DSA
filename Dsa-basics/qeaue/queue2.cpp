#include<bits/stdc++.h>
using namespace std;
//          :REVERSE OF QUEUE:
 /*
 queue <int(queue<int> a)>{
    stack<int> s;
    while(a.empty()){
        int element=a.front();
        a.pop();
        s.push(element);
    }
    while (s.empty())
    {
        int element=s.top();
        s.pop();
        a.push(element);
    }
    return a;
 }
 */
 //          :find first negative element in every window of k size: 
   /*
   vector<long long>Negative(long long int a[],long long n,long long k){
    deque<long long int> dq;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            dq.push_back(i);
        }
    }
    if(dq.size()>0){
        v.push_back(dq.front());
    }
    else{
        v.push_back(0);
    }
    for(int i=0;i<n;i++){
        if(!dq.empty() && i-dq.front()>=k){
           dq.pop_front();
        }
        if(a[i]<0){
            dq.push_back(i);
        }
      if(dq.size()>0){
        v.push_back(dq.front());
    }
    else{
        v.push_back(0);
    }  
    }
    return v;
   }
   */
//                    :REVERSE FIRST K ELEMENT OF QUEUE:
       /*
       queue<int> reverse(queue<int>q,int k){
        stack<int>s;
        for(int i=0;i<k;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        while (!s.empty())
        {
            int val=s.top();
            s.pop();
            q.push(val);
        }
        int t= q.size()-k;
        while(t--){
            int val=q.front();
            q.pop();
            q.push(val);
        }
        return q;
       }
       */
       //       :FIRST NON-REPEATING CHARACTER IN STRING:
       /*
       class solution{
        
        public:
        string nonrepeat(string s){
           unordered_map<char,int> count;
           queue<int>q;
           string ans="";
           for (int i = 0; i < s.length(); i++)
           {
            char ch=s[i];
              count[ch]++;
              q.push(ch);
           }
           while (!q.empty())
           {
            if(count[q.front()]>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
           }
          if(q.empty()){
            ans.push_back('#');
          } 
          return ans;
        }
       };
       */
//             :CIRCULAR TOUR:
  /*  
     struct petrolpump
     {
      int petrol;
      int distance;  
     };
     class Solution{
     public:   
    int tour(petrolpump p[],int n ){
        int deficit=0;
        int balance=0;
        int start=0;
        for(int i=0;i<n;i++){
            balance=p[i].petrol-p[i].distance;
            if(balance<0){
                deficit+=balance;
                start=i+1;
                balance=0;
            }
        }
       if(deficit+balance>=0){
        return start;

       }
       else{
        return -1;
       } 
    }  
};
*/
//           :INTERLEAVE THE QUEUE IN TWO PARTS:

int main(){
    
}