#include <bits/stdc++.h>
using namespace std;
//            :IMPLLEMENTATION OF QUEUE:
/*
class qeaue1
{
private:
    int * arr;
    int front;
    int rear;
    int size;
public:
    qeaue1(){
       size=100000;
       arr =new int[size];
    }
    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
     void enqueue(int data){
        if(rear==size){
            cout<<"FULL";

        }
        else{
            arr[rear]=data;
            rear++;
        }
     }
     int dequeue(){
        if(front==rear){
            return -1;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return -1;
        }
     }
     int front(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
     }
};
*/
//            :IMPLEMENTATION OF CIRCULARQUEUE :
/*
class circularqueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    circularqueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "FULL";
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }
    int deque()
    {
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
};
*/
//               : IMPLEMENTATION OF DEQUEUE:
/*
class dequeue
{
private:
   int *arr;
   int front;
   int rear;
   int size;
public:
    dequeue(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }
    bool frontpush(int x){
         if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
           return -1;  
         }
         else if(front==-1){
            front=rear=0;
         }
         else if(front ==0 && rear!=0){
             front=size-1;
         }
         else{
            front--;
         }
         arr[front]=x;
         return true;
    }
    bool pushrear(int value){
      if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
          
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }
    int popfront(){
         if (front == -1)
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    int poprear(){
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear==0)
        {
            rear = size-1;
        }
        else
        {
            rear--;
        }
        return ans;
    }
    int getfront(){
      if(isempty()){
        return -1;
      }
      return arr[front];
    }
    int getrear(){
          if(isempty()){
            return -1;
          }
          
            return arr[rear];
          
    }
    bool isempty(){
         if(front==-1){
            return true;
         }
       else{
        return false;
       }  
    }
};
*/

int main()
{
    
    queue<int> a;
    a.push(18);
    a.push(17);
    a.push(16);
    a.push(15);
    cout << a.size() << endl;
    a.pop();
    cout << a.front() << endl;
}