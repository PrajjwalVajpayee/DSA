#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node*left;
 Node*right;
 Node(int x){
    x=data;
   this-> left=NULL;
   this->right=NULL;
 }
};
//       :  MERGE TWO BST:
void inorder(Node*root,vector<int> ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
vector<int>merge(vector<int>&v1,vector<int>&v2){
    vector<int> ans(v1.size()+v2.size());
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            ans[k++]=v1[i];
            i++;
        }
        else{
            ans[k++]=v2[j];
            j++;
        }

    }
while(i<v1.size()){
    ans[k++]=v1[i];
    i++;
}
while(j<v2.size()){
    ans[k++]=v2[j];
    j++;
}

}
Node*normaltobalnced(int s,int e,vector<int>&v){
   if(s>e){
    return NULL;
   }
   int mid=(s+e)/2;
   Node* root=new Node(v[mid]);
   root->left=normaltobalnced(s,mid-1,v);
   root->right=normaltobalnced(mid+1,e,v);
   return root;
 }
Node* mergetobst(Node*root1,Node*root2){
    vector<int> v1,v2;
    inorder(root1,v1);
    inorder(root2,v2);
    vector<int> ans=merge(v1,v2);
    return normaltobalnced(0,ans.size()-1,ans);
}
int main(){

}