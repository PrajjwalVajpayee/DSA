#include<bits/stdc++.h>
using namespace std;

 struct Node{
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
 //       :HEIGHT OF BINARY TREE:
 /*
 class solution{
     public:
     int height(Node*node){
         if(node==NULL){
            return 0;
         }
         int left=height(node->left);
         int right=height(node->right);
         int ans=max(left,right)+1;
         return ans;
     }
 };
 */
 //          :DIAMETER OF TREE:
/*
class solution{
    private:
    int height(Node*node){
         if(node==NULL){
            return 0;
         }
         int left=height(node->left);
         int right=height(node->right);
         int ans=max(left,right)+1;
         return ans;
     }
 public:
 int diameter(Node*root){
 if(root==NULL){
        return 0;

    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+height(root->right)+1;
    int ans=max(op1,max(op2,op3));
    return ans;
 } 
 //         :METHOD-2:
 pair<int,int> diameterfast(Node*root){
    if(root==NULL){
        pair<int,int> p =make_pair(0,0);
        return p; 
    }
    pair<int,int> left=diameterfast(root->left);
    pair<int,int> right=diameterfast(root->right);
    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second);
    return ans;
 } 
};
*/
//           :CHECK BALANCED TREE:
/*
class solution{
public:
 pair<bool ,int> isbalanced(Node*root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    pair<int,int>left=isbalanced(root->left);
    pair<int,int>right=isbalanced(root->right);
    bool leftans=left.first;
    bool rightans=right.first;
    bool diff=abs(left.second-right.second)<=1;
    pair<bool,int>ans;
    ans.second=max(left.second,right.second)+1;
        if(leftans && rightans && diff){
        ans.first= true;
    }
    else{
        ans.first= false;
    }
    return ans;
 } 

};
*/
//           :CHECK IF TWO TREE IS IDDENTICAL :
/*class solution{
 public:
  bool isidentical(Node*r1,Node*r2){
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1!=NULL && r2==NULL){
        return false;
    }
     if(r2!=NULL && r1==NULL){
        return false;
    }
    bool left=isidentical(r1->left,r2->left);
    bool right=isidentical(r1->right,r2->right);
    bool value=r1->data==r2->data;
    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
  }
};
*/
//                  :SUM TREE:
class solution{
public:
  pair<bool,int> isSumtree(Node*root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    if(root->left ==NULL && root->right==NULL){
          pair<bool,int> p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int>leftans=isSumtree(root->left);
    pair<bool,int>rightans=isSumtree(root->right);
    bool leftsum=leftans.first;
    bool rightsum=rightans.first;
    bool condi=root->data==leftans.second+rightans.second;
    pair<bool,int> ans;
    if(leftsum && rightsum && condi){
        ans.first=true;
        ans.second=2*root->data;
    }
    else{
        ans.first= false;
    }
     return ans;
  }
};
int main(){
   
}