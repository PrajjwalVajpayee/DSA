/*#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *prev;
  Node *next;

    Node (int d)
  {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }

};
void
print (Node * head)
{
  Node *temp = head;
  while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  cout << endl;
}
 
void
insertathead (Node * &head, int d)
{
  Node *temp = new Node (d);
  temp->next = head;
  head->prev = temp;
  head = temp;
}

void
insertatail (Node*& tail, int d)
{
  Node *temp = new Node (d);
  temp->next = tail;
  tail->prev = temp;
  tail = temp;
}

void
insertatposition (Node*& tail, Node*& head, int position, int d)
{
  if (position == 1)
    {
      insertathead (head, d);
      return;
    }
  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1)
    {
      temp = temp->next;
      cnt++;
    }
  if (temp->next == NULL)
    {
      insertatail (tail, d);
      return;
    }
  Node *nodetoinsert = new Node (d);
  nodetoinsert->next = temp->next;
  temp->next->prev = nodetoinsert;
  temp->next = nodetoinsert;
  nodetoinsert->prev = temp;

}

int
length (Node * head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
    {
      len++;
      temp = temp->next;
    }
  return len;
}

int
main ()
{
  Node *node1 = new Node (10);
  
  Node *head = node1;
  Node *tail = node1;
  print (head);
  insertathead (head, 11);
  print (head);
  insertathead (head, 12);
  insertatail (tail, 34);
  print(head);
  insertatail (tail, 38);
  print(head);
  insertatposition (tail, head, 4, 78);
   print(head);
  
  cout << length (head) << endl;
}
*/
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

};

void print(Node *head,Node*tail) {
    Node *temp = head;
    if(temp->next==NULL){
        head= temp;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"head->"<<head->data<<endl;
     cout<<"tail->"<<tail->data<<endl;
    cout << endl;
}

void insertathead(Node *&head, int d) {
    Node *temp = new Node(d);
    if (head != NULL) {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

void insertatail(Node *&tail, int d) {
    Node *temp = new Node(d);
    if (tail != NULL) {
        temp->prev = tail;
        tail->next = temp;
    }
    tail = temp;
}

void insertatposition(Node *&tail, Node *&head, int position, int d) {
    if (position == 1) {
        insertathead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        insertatail(tail, d);
        return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->prev = temp;
    nodetoinsert->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = nodetoinsert;
    }
    temp->next = nodetoinsert;

}

int length(Node *head) {
    int len = 0;
    Node *temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
void deletenode(int position,Node*&head){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
    }
    else{
        Node* curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head,tail);

    insertathead(head, 11);
    print(head,tail);

    insertathead(head, 12);
    print(head,tail);

    insertatail(tail, 34);
     print(head,tail);

    insertatail(tail, 38);
     print(head,tail);

    insertatposition(tail, head, 4, 78);
     print(head,tail);
    deletenode(6,head);
     print(head,tail);
    cout << length(head) << endl;
}
