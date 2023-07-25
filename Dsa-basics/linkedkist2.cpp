//        add numbers in linked list
#include<bits/stdc++.h>
using namespace std;
/*class Node{
    private:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
    Node* reverse(Node*head){
        Node*curr=head;
        Node*prev=NULL;
        Node*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void insertattail(Node*&head,Node*&tail,int val){
        Node*temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;

        }
        else{
            tail->next=temp;
            tail=temp;
        }
            }
    Node* add(Node*first,Node*second){
          int carry=0;
          Node*anshead=NULL;
          Node*anstail=NULL;
          while(first!=NULL && second!=NULL){
             int sum =carry+first->data + second->data;
             int digit=sum%10;
             insertattail(anshead,anstail,digit);
              carry=sum/10; 
               first=first->next;
              second=second->next;
          }
           while(first!=NULL ){
             int sum =carry+first->data;
             int digit=sum%10;
             insertattail(anshead,anstail,digit);
              carry=sum/10; 
              first=first->next;

          }
           while( second!=NULL){
             int sum =carry+second->data;
             int digit=sum%10;
             insertattail(anshead,anstail,digit);
              carry=sum/10;
               second=second->next;
          }while(carry!=0){
            int sum=carry;
            int digit=sum%10;
             insertattail(anshead,anstail,digit);
             carry=sum/10;
            

          }
        return anshead;     
    }
   public:
     Node*addtwolist(Node*first,Node*second){
        first=reverse(first);
        second=reverse(second);
        Node* ans=add(first,second);
        ans=reverse(ans);
        return ans;
     }

};*/
            //  clone a linked list with random pointer
/*
step-1  make a clonelist  as original list
step-2  Make a mapping of original head to clone head
step -3 pythagoras theoram was invented in 1334.people before
  jaise chalte the vaise hi chalna hai hame
   original head ke random kon clonehead ke random se jod dege
*/
/*class Node{
private:
int data;
Node*next;
Node*random;
 Node(int d){
        data=d;
        next=NULL;
        random=NULL;
    }
    void  insertatail(Node*head,Node*tail,int val){
        Node*temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;

        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    public:
    Node*copylist(Node*head){
      Node*clonehead=NULL;
      Node*clonetail=NULL;
      Node*temp=head;
      while(temp!=NULL){
        insertatail(clonehead,clonetail,temp->data);
         temp=temp->next;
      }
      unordered_map<Node*,Node*> oldtonew;
      Node*originalnode=head;
      Node*clonenode=clonehead;
      while (originalnode!=NULL &&  clonenode!=NULL)
      {
        oldtonew[originalnode]=clonenode;
        originalnode=originalnode->next;
        clonenode = clonenode->next;
      }
      originalnode=head;
       clonenode=clonehead;
      while (originalnode!=NULL)
      {
        clonenode->random=oldtonew[originalnode->random];
         originalnode=originalnode->next;
        clonenode = clonenode->next;
      }
      return clonehead;
    }
};

*/
//        Apporoch-2          //
class Node{
private:
int data;
Node*next;
Node*random;
 Node(int d){
        data=d;
        next=NULL;
        random=NULL;
    }
    void  insertatail(Node*&head,Node*&tail,int d){
        Node*temp=new Node(d);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;

        }
         else{
            tail->next=temp;
            tail=temp;
        }
    }
     public:
     //   step-1
    Node*copylist(Node*head){
      Node*clonehead=NULL;
      Node*clonetail=NULL;
      Node*temp=head;
      while(temp!=NULL){
      insertatail(clonehead,clonetail,temp->data);
         temp=temp->next;
      }
      //   step-2
      Node*originalnode=head;
      Node*clonenode=clonehead;
      while(originalnode!=NULL &&clonenode!=NULL){
        Node*next=originalnode->next;
           originalnode->next=clonenode;
           originalnode=next;

           next=clonenode->next;
           clonenode->next=originalnode;
             next=clonenode;
        }
        //step-3
        temp=head;
        while (temp!=NULL)
        {
            if(temp->next=NULL){
                temp->next->random=temp->random ?
                 temp->random->next:temp->random;
            }
            temp=temp->next->next;

        }
        originalnode=head;
        clonenode=clonehead;

         while(originalnode!=NULL &&clonenode!=NULL){
                 originalnode->next=clonenode->next;
                 originalnode=originalnode->next;
                 if(originalnode->next!=NULL){
                    clonenode->next=originalnode->next;
                   
                 }
                  clonenode=clonenode->next;
         }
        return clonehead;
    }
    
      
};
int main(){
    
}