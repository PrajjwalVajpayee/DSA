#include<bits/stdc++.h>
using namespace std;
class Node{
   public:

    int data;
    Node* next;

    Node(int data){
      this->data=data;
      this->next=NULL;
    }
   void insertathead(Node* &head,int d){
      Node*temp= new Node(d);
      temp->next=head;
      head = temp;
   }
   void print(Node* &head){
      Node* temp=head;
      while(temp!=NULL){
         cout<<temp->data<<" ";
        temp= temp->next;
      }
      cout<<endl;
   }
   ~Node(){
      Node* head=head;
      
   }
};
void insertatail(Node* &tail,int d){
   Node* temp=new Node(d);
   tail->next=temp;
   tail=tail->next;
}
void insertatposition(Node* &head,int p,int d){
   Node* temp=head;
   int cnt=1;
   while(cnt<=p-1){
      temp=temp->next;
      cnt++;}
      Node* nodetoinsert=new Node(d);
      nodetoinsert->next=temp->next;
      temp->next=nodetoinsert;
   
}
int main(){
   //  Node obj;
   //   cout<<obj.data;
     Node* node1=new Node(10);
     cout<<node1->data<<endl;
     cout<<node1->next<<endl;
     Node* head=node1;
     Node* tail=node1;
    head->print(head);
   insertatail(tail,12);
   head->print(head);
   insertatail(tail,15);
   head->print(head);
   insertatposition(head,1,22);
   head->print(head);
  return 0; 
}