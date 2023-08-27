#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node*left;
 Node*right;
 Node(int x){
    x=data;
    left=right=NULL;
 }
};
Node* insertintoBST(Node*root,int data){
   if(root==NULL){
    root=new Node(data);
    return root;
   }
   if(data>root->data){
    root->right=insertintoBST(root->right,data);

   }
   else{
    root->left=insertintoBST(root->left,data);
   }
   //      insertion ki complexitiy O(logN)hoti hai
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
      root= insertintoBST(root,data);
       cin>>data; 
    }
    }
//        :SEARCH IN A BST:
bool searchBST(Node*root,int x){
       if(root->data==x){
        return true;
       }
       else{
          return false;
       }
       if(root->data>x){
        searchBST(root->right,x);
       }
       else{
        searchBST(root->left,x);
       }
}

int main(){
  Node*root=NULL;
  cout<<"Enter data to create BST"<<endl;
  takeinput(root);
}