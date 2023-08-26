#include <bits/stdc++.h>
using namespace std;
/*
class solution{
private:
public:
};
*/
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};
//       :SUM OF LONGEST BLOODLINE OF TREE:
/*
class solution
{
public:
    void solve(Node *root, int len, int &maxlen, int sum, int &maxsum)
    {
        if (root == NULL)
        {
            if (len > maxlen)
            {
                len = max(len, maxlen);
                sum = max(sum, maxsum);
            }
            else if (len == maxlen)
            {
                sum = max(sum, maxsum);
            }
            return;
        }
        sum = sum + root->data;
        solve(root->left, sum, maxsum, len + 1, maxlen);
        solve(root->right, sum, maxsum, len + 1, maxlen);
    }
    int sumofroot(Node *root)
    {
        int len = 0;
        int maxlen = 0;
        int sum = 0;
        int maxsum = 0;
        solve(root, len, maxlen, sum, maxsum);
        return maxsum;
    }
};
*/
//      :LEAST COMMON ANCESTOR:
/*
class solution{
public:
Node* lca(Node*root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node*leftans=lca(root->left,n1,n2);
    Node*rightans=lca(root->right,n1,n2);
    if(leftans!=NULL && rightans!==NULL){
        return root;
    }
    if(leftans!=NULL &&rightans==NULL){
        return leftans;
    }
    if(leftans==NULL &&rightans!=NULL){
        return rightans;
    }
    else{
        return NULL;
    }
}
};
*/
//              :K SUM PATHS:
class solution{
private:
public:
void solve(Node*root,int k,int &count,vector<int>path){
if(root==NULL){
    return ;
}
path.push_back(root->data);
solve(root->left,k,count,path);
solve(root->right,k,count,path);
int size=path.size();
int sum=0;
for(int i=size-1;i>0;i--){
    sum+=path[i];
    if(sum==k){
        count++;
    }
    path.pop_back();
    }
}
int sum(Node*root,int k){
        vector<int> path;
       int count=0;
       solve(root,k,count,path);
       return count;

}
};
//          :Kth ANCESTOR OF TREE:
class solution{
private:
public:
Node*solve(Node*root,int &k,int node){
    if(root==NULL){
        return NULL;
            }
         if(root->data==node){
            return root;
         }   
        Node* leftans=solve(root->left,k,node);
        Node* rightans=solve(root->right,k,node);
    if(leftans!=NULL && rightans==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }  
        return leftans;
    }
    if(leftans==NULL && rightans!=NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }  
        return rightans;
    }
}
int  ancestor(Node*root,int k,int node){
   Node* ans=solve(root,k,node);
   if(ans==NULL ||  ans->data==node){
    return -1;
   }
   else{
    return ans->data;
   }
}
};
//      :MAX SUM OF NON-ADJACENT NODES:
class solution{
private:
public:
pair<int,int> solve(Node*root){
if(root==NULL){
pair<int ,int> p=make_pair(0,0);

    return p;
}
pair<int,int> left=solve(root->left);
pair<int,int> right=solve(root->right);
pair<int,int>res;
res.first=root->data+left.second+right.second;
res.second=max(left.first,left.second)+max(right.first,right.second);
return res;
}
int getmax(Node*root){
  pair<int,int> ans=solve(root);
  return (ans.first,ans.second);  
}
};
int main()
{
}