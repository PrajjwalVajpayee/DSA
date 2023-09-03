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
//          :RECURSIVE WAY:
bool searchBST(Node*root,int x){
       if(root->data==x){
        return true;
       }
       if(root==NULL){
          return false;
       }
       if(root->data>x){
        return searchBST(root->left,x);
       }
       else{
        return searchBST(root->right,x);
       }
}Node* minval(Node*root){
   Node*temp=root;
   while(temp->left !=NULL){
      temp=temp->left;
     
   }
    return temp;
}
//           :DELETION:
Node* deleteBST(Node*root,int x){
    if(root==NULL){
      return NULL;
    }
    if(root->data==x){
      //  0 child
       if(root->left== NULL &&root->right==NULL){
         delete root;
         return NULL;
       }  
      // 1 child
       if(root->left!=NULL && root->right==NULL){
         Node*temp=root->left;
         delete root;
         return temp;
       } 
       if(root->left==NULL && root->right!=NULL){
         Node*temp=root->right;
         delete root;
         return temp;
       } 
      // 2 child
        if(root->left!=NULL && root->right!=NULL){
         int mini=minval(root->right)->data;
         root->data=mini;
         root->right=deleteBST(root->right,mini);
        }       
    }
    else if(root->data>x){
         root->left=deleteBST(root,x);
    }
    else{
      root->right=deleteBST(root,x);
    }
}
//               :VALID BST:
bool isBST(Node*root,int min,int max){
   if(root==NULL){
      return true;
   }
   if(root->data>min && root->data<max){
      bool left=isBST(root->left,min,root->data);
      bool right=isBST(root->right,root->data,max);
      return left && right;
   }
   else{
      return false;
   }
}
bool validBST(Node*root){
  return isBST(root,INT_MAX,INT_MIN);
}
//              :Kth SMALLEST ELEMENT IN BST:
int solve(Node*root,int &i,int k){
  if(root==NULL){
    return -1;
  }
  int left=solve(root->left,i,k);
  if(left!=-1){
    return left;
  }
  i++;
  if(i==k){
    return root->data;
  }
  return solve(root->right,i,k);
}
int smallest(Node*root,int k){
  int i=0;
  int ans=solve(root,i,k);
  return ans; 
}  
//           :PREDESSOR AND SUCCESSOR IN BST :
pair<int,int>ps(Node*root,int key){
  Node* temp=root;
  int pre=-1;
  int suc=-1;
  while(temp->data!=key){
    if(temp->data>key){
      suc=temp->data;
      temp=temp->left;
      
    }
    else{
      
       suc=temp->data;
       temp=temp->right;
     

    }
  }
  Node* left=temp->left;
  while(left!=nullptr){
    pre=left->data;
    left=left->right;
  }
  Node*right=temp->right;
  while(right!=NULL){
    suc=right->data;
    right=right->left;
  }
  pair<int ,int>ans=make_pair(pre,suc);
  return ans;
}
//           : LCA IN A BST:
Node*lca(Node*root,Node*p,Node*q){
  if(root==NULL){
    return NULL;
  }
  if(root->data<p->data && root->data<q->data){
    return lca(root->right,p,q);
  }
   if(root->data>p->data && root->data>q->data){
    return lca(root->left,p,q);
  }
  return root;
}
//          :TWO SUM IN A BST:
 void inorder(Node*root,vector<int> &v){
  if(root==NULL){
    return ;
  }
  inorder(root->left,v);
  v.push_back(root->data);
  inorder(root->right,v);
 }
bool twosum(Node*root,int target){
  vector<int> v;
  inorder(root,v);
  int i=0,j=v.size()-1;
  while(i<j){
    int sum=v[i]+v[j];
    if(sum==target)
      return true;
      else if(sum>target){
        j--;
      }
      else{
        i++;
      }
  }
  return false;
}
//               :FLATTEN BST INTO SORTED LIST :
 void inorder(Node*root,vector<int> &v){
  if(root==NULL){
    return ;
  }
  inorder(root->left,v);
  v.push_back(root->data);
  inorder(root->right,v);
 }
 Node*flatten(Node*root){
  vector<int> v;
  inorder(root,v);
  int n=v.size();
  Node* newnode=new Node(v[0]);
  Node*curr=newnode;
  for(int i=1;i<n;i++){
      Node* temp=new Node(v[i]);
      curr->left=nullptr;
      curr->right=temp;
      curr=temp;
  }
  curr->left=NULL;
  curr->right=NULL;
  return newnode;
 }
//      :NORMAL  BST INTO BALANCED BST:
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
 Node*balanced(Node*root){
  vector<int> v;
  inorder(root,v);
  return normaltobalnced(0,v.size()-1,v);
 }
//          :PRE-ORDER TRAVERSAL OF BST:
Node*solve(vector<int> &preorder,int min,int max,int &i){
  if(i>preorder.size()){
    return NULL;
  }
  if(i<min || i>max){
    return NULL;
  }
  Node* root=new Node(preorder[i]);
  root->left=solve(preorder,min,root->data,i);
   root->right=solve(preorder,root->data,max,i);
   return root;
}

Node*preorderbst(vector<int> &preorder){
  int min =INT_MIN;
  int max=INT_MAX;
  int i=0;
  return solve(preorder,min,max,i);
}










int main(){
  Node*root=NULL;
  cout<<"Enter data to create BST"<<endl;
  takeinput(root);
}