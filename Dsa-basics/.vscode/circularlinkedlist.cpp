#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
    Node (int d)
  {
    this->data = d;
    this->next = NULL;
  }
   ~Node ()
  {
    int val = this->data;
    if (this->next == NULL)
      {
	delete next;
	next = NULL;
      }
    cout << "memory is free " << val << endl;
  }
};

void
insertatnode (Node * &tail, int element, int d)
{
  if (tail == NULL)
    {
      Node *newnode = new Node (d);
      tail = newnode;
      newnode->next = newnode;
    }
  else
    {
      Node *curr = tail;
      while (curr->data != element)
	{
	  curr = curr->next;
 
	}
      Node *temp = new Node (d);
      temp->next = curr->next;
      curr->next = temp;
    }
}

void
deletenode (Node * &tail, int value)
{
  if (tail == NULL)
    {
      cout << "fuck you" << endl;
      return;
    }
  else
    {
      Node *prev = tail;
      Node *curr = prev->next;
      while (curr->data != value)
	{
	  prev = curr;
	  curr = curr->next;
	}
      prev->next = curr->next;
      if(tail==curr)
      tail=NULL;
      else if (tail == curr)
	{
	  tail = prev;
	}
      curr->next = NULL;
      delete curr;
    }
}

void
print (Node * tail)
{
  Node *temp = tail;
  if(tail==NULL){
      cout<<"FUCK YOU"<<endl;
  }
  do
    {
      cout << tail->data << " ";
      tail = tail->next;
    }
  while (tail != temp);
  cout << endl;
}

int
main ()
{
  Node *tail = NULL;
   insertatnode (tail, 5, 3);
   print (tail);
   insertatnode (tail, 3, 6);
   print (tail);
   insertatnode (tail, 6, 5);
   print (tail);
   insertatnode (tail, 5, 4);
   print (tail);
   insertatnode (tail, 4, 2);
   print (tail);
   insertatnode (tail, 4, 1);
   print (tail);
   insertatnode (tail, 6, 9);
   print (tail);
  deletenode (tail, 3);
  print (tail);
  return 0;
}
