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
//      :BULD A TREE USING INORDER AND PRE-ORDER:
class solution
{
private:
public:
    int findposition(int in[], int element, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (in[i] == element)
                return i;
        }
        return -1;
    }
    Node *solve(int in[], int pre[], int &index, int inorderstart, int inorderend, int n)
    {
        if (index >= n || inorderstart > inorderend)
        {
            return NULL;
        }
        int element = pre[index++];
        Node *root = new Node(element);
        int position = findposition(in, element, n);

        root->left = solve(in, pre, index, inorderstart, position - 1, n);
        root->right = solve(in, pre, index, position + 1, inorderend, n);
        return root;
    }
    Node *buildtree(int in[], int pre[], int n)
    {
        int preorderindex = 0;
        Node *ans = solve(in, pre, preorderindex, 0, n - 1, n);
        return ans;
    }
};
//          :BUILd A TREE USING INORDER AND POST-ORDER:
class solution{
private:
public:
void createmapping(int in[],map<int,int>&nodetoindex,int n){
for(int i=0;i<n;i++){
    nodetoindex[in[i]]=i;
}
}
Node*solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n,map<int,int>nodetoindex){
    if(index<0||inorderstart>inorderend){
        return NULL;
    }
    int element=post[index--];
    Node* root=new Node(element);
    int position=nodetoindex[element];
    
     root->right=solve(in,post,index,position+1,inorderend,n,nodetoindex);
     root->left=solve(in,post,index,inorderstart,position-1,n,nodetoindex);
   
    return root;
}
Node*biuldtree(int in[],int post[],int n){
    int postorderindex=n-1;
    map<int,int> nodetoindex;
    createmapping(in,nodetoindex,n);
    Node*ans=solve(in,post,postorderindex,0,n-1,n,nodetoindex);
    return ans;
}
};
//      :BURNING TREE:
class solution{
public:
Node*createparentmapping(Node*root,int target,map<Node*,Node*>&nodetoparent){
Node* res=NULL;
queue<Node*>q;
q.push(root);
nodetoparent[root]=NULL;
while(!q.empty()){
    Node*front=q.front();
    q.pop();
    if(front->data==target){
        res=front;
    }
    if(front->left){
        nodetoparent[front->left]=front;
        q.push(front->left);
    }
    if(front->right){
        nodetoparent[front->right]=front;
        q.push(front->right);
    }
}
return res;
}
int burntree(Node* root,map<Node*,Node*>&nodetoparent){
    map<Node*,bool> visited;
    queue<Node*>q;
    q.push(root);
    visited[root]=true;
    int ans=0;
    while(!q.empty()){
        bool flag=true;
        int size=q.size();
        for(int i=0;i<size;i++){
        Node*front=q.front();
        q.pop();
        if(front->left && !visited[front->left]){
           flag=1;
           q.push(front->left);
           visited[front->left]=1;
        }
         if(front->right && !visited[front->right]){
          flag=1;
            q.push(front->right);
           visited[front->right]=1;
        }
        if(nodetoparent[front] && !visited[nodetoparent[front]]){
            flag=1;
            q.push(nodetoparent[front]);
           visited[nodetoparent[front]]=1;
        }
        }
       if(flag==1){
        ans++;
       } 
    }
    return ans;
}
   int mintime(Node*root,int target){
   
    map<Node*,Node*> nodetoparent;
    Node* targetnode=createparentmapping(root,target,nodetoparent);
     int ans=burntree(targetnode,nodetoparent);
    return ans;
   }
};
//           :FLATTEN BINARY TREE INTO LINKED LIST:
class solution {
 public:
  void flatten(Node* root){
   Node*curr=root;
   while(curr!=NULL){
   if(curr->left){
    Node*pred=curr->left;
    while(pred->right)
       pred=pred->right;

       pred->right=curr->right;
       curr->right=curr->left;
        curr->left=NULL;
   }
   curr=curr->right;
  }
  curr=root;
  
  }
};