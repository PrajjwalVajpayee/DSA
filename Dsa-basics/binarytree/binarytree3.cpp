#include <bits/stdc++.h>
using namespace std;
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
//           :ZIG-ZAG TRAVERSAL:
/*
class solution
{
public:
    vector<int> zigzagtraversal(Node *root)
    {
        vector<int> result;
        if (root == NULL)
        {
            return result;
        }
        queue<Node*> q;
        q.push(root);
        bool lefttoright = true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans(size);
            for (int i = 0; i < size; i++)
            {
                Node *frontnode = q.front();
                q.pop();
                int index = lefttoright ? i : size - i - 1;
                ans[index] = frontnode->data;
                if (frontnode->left)
                    q.push(frontnode->left);
                if (frontnode->right)
                    q.push(frontnode->right);
            }
            lefttoright = !lefttoright;
            for (auto i : ans)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
*/
//         :BOUNDARY TRAVERSAL:
/*
class solution{
  public:
  void traverseleft(Node*root,vector<int>&ans){
     if(root==NULL || root->left==NULL && root->right==NULL){
        return ;
     }
     ans.push_back(root->data);
       if(root->left){
        traverseleft(root->left,ans);
       }
       else{
        traverseleft(root->right,ans);
       }
  }
  void traverseleaf(Node*root,vector<int> &ans){
    if( root->left==NULL && root->right==NULL){
       ans.push_back(root->data);
        return ;
     }
 traverseleaf(root->left,ans);
 traverseleaf(root->right,ans);

}
void traverseright(Node*root,vector<int>&ans){
 if(root==NULL || root->left==NULL && root->right==NULL){
        return ;
     }
     if(root->right){
        traverseright(root->right,ans);
     }
     else{
        traverseright(root->left,ans);
     }
     ans.push_back(root->data);
}
  vector<int>boundary(Node*root){
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
ans.push_back(root->data);
  traverseleft(root->left,ans);
  traverseleaf(root->left,ans);
  traverseleaf(root->right,ans);
  traverseright(root->right,ans);
  return ans;
}
};
*/
//              :VERTICAL ORDER TRAVERSAL:
/*
class solution
{
public:
    vector<int> verticalorder(Node *root)
    {
        map<int, map<int, vector<int>>> nodes;
        queue<pair<Node *, pair<int, int>>> q;
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        q.push(make_pair(root, make_pair(0, 0)));
        while (!q.empty())
        {
            pair<Node *, pair<int, int>> temp = q.front();
            q.pop();
            Node *frontnode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            nodes[hd][lvl].push_back(frontnode->data);
            if (frontnode->left)
            {
                q.push(make_pair(frontnode->left, make_pair(hd - 1, lvl + 1)));
            }
            if (frontnode->right)
            {
                q.push(make_pair(frontnode->right, make_pair(hd + 1, lvl + 1)));
            }
        }
        for (auto i : nodes)
        {
            for (auto j : i.second)
            {
                for (auto k : j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};
*/
//         : TOP VIEW OF TREE:
/*
class solution{
  public:
  vector<int>topview(Node*root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> topnode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node*frontnode=temp.first;
        int hd=temp.second;
        if(topnode.find(hd) == topnode.end()){
            topnode[hd]=frontnode->data;
        }
        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
   for(auto i: topnode){
    ans.push_back(i.second);
   } 
   return ans;
  }
};
*/
//            :BOTTOM VIEW OF TREE:
/*
class solution{
  public:
  vector<int>topview(Node*root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> topnode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node*frontnode=temp.first;
        int hd=temp.second;
      
        topnode[hd]=frontnode->data;
        
        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
   for(auto i: topnode){
    ans.push_back(i.second);
   } 
   return ans;
  }
};
*/
//       :LEFT VIEW OF TREE:
/*
class solution{
    public:
    void solve(Node*root,vector<int>&ans,int level){
       if(root==NULL){
        return ;
       }
       if(level==ans.size()){
        ans.push_back(root->data);
       }
       solve(root->left,ans,level+1);
       solve(root->right,ans,level-1);
    }

    vector<int> leftview(Node*root){
        vector<int>ans;
        solve(root,ans,0);
        return ans;
    }
    };
 */      
int main()
{
}