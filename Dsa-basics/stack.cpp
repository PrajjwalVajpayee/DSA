#include <bits/stdc++.h>
using namespace std;
//           :IMPLEMENTATION OF STACK USING ARRAY:
/*class Stack
{
public:
   int *arr;
   int top;
   int size;
   Stack(int size)
   {
      this->size = size;
      arr = new int(size);
      top = -1;
   }
   void push(int element)
   {
      if (size - top > 1)
      {
         top++;
         arr[top] = element;
      }
      else
      {
         cout << "Stack Overflow" << endl;
      }
   }
   void pop()
   {
      if (top >= 0)
      {
         top--;
      }
      else
      {
         cout << "Stack Underflow" << endl;
      }
   }
   int peek()
   {
      if (top >= 0 && top < size)
      {
         return arr[top];
      }
      else
      {
         cout << "Stack is empty" << endl;
         return -1;
      }
   }
   bool isempty()
   {
      if (top == -1)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
};
*/
/*class TwoStack{
   int *arr;
   int top1;
   int top2;
   int size;
   public:
   TwoStack(int s){
      this->size=s;
       top1=-1;
       top2=s;
       arr=new int(s);
   }
     void push1(int num){
         if(top2-top1>1){
            top1++;
            arr[top1]=num;
         }
         else{
            cout<<"STACK Overflow";

         }
     }  
     void push2(int num){
      if(top2-top1>=1){
            top2--;
            arr[top2]=num;
         }
         else{
            cout<<"STACK Overflow";

         }
     }
   int pop1(){
      if (top1>=0){
        int ans=arr[top1]; 
        top1--;
        return ans;
      }
      else{
         return -1;
      }

   }
   int pop2(){
      if (top2< size){
        int ans=arr[top2]; 
        top2++;
        return ans;
      }
      else{
         return -1;
      }
   }

};
*/
//         :REVERSE OF A STRING :
/*
int main()
{

   string str ="abcba";
   stack<char> s;

   for (int i = 0; i < str.length(); i++)
   {
     char ch=str[i];
     s.push(ch); 
   }
   string a="";
   while (!s.empty())
   {
      char ch=s.top();
      a.push_back(ch);
      s.pop();
   }
   cout<<"answer is: "<<a<<endl;
   return 0;
   
   
}
*/
//            : DELETE THE MIDDLE OF STACK:
/*
void Solve(stack<int> &Stack,int count,int size){
    if(count == size/2){
      Stack.pop();
      return ;
    }
    int num=Stack.top();
    Stack.pop();

   Solve(Stack,count+1,size);
   Stack.push(num);
}
void deleteMiddle(stack<int> &Stack,int n){
  int count=0;
  Solve(Stack,count,n);

}
*/ 
//               :VALID PARENTHESIS:
/*
bool isparenthesis(string exp){
   stack<char> s;
   for (int i = 0; i < exp.length(); i++)
   {
      char ch=exp[i];
      if (ch=='(' || ch=='{' || ch=='['){
          s.push(ch);

      }
      else{
         if (!s.empty()){
         char top=s.top();
         if ((ch==')' && top=='(') || (ch=='}' && top=='{')  || (ch==']' && top == '[')){
            s.pop();

         }
         else{
            return false;
         }
         }
         else{
            return false;
         }
      }
   }
   if (s.empty())
      return true;
    else
    return false;  
   
}
*/
//                : INSERT A ELEMENT AT BOTTOM OF STACK: 
  /*
  void solve(stack<int> &s,int x){
   // checking if stack is empty or not if yes insert the element 
   if(s.empty()){
      s.push(x);
      return ;
   }

   int num=s.top();
   s.pop();
   // recursive call
   solve(s,x);

   s.push(num);
  }
  stack<int> pushatbottom(stack<int> &mystack,int x){
   solve(mystack,x);
   return mystack;
  }
  */

int main (){
stack<int> s;
s.push(22);
s.push(34);
s.push(45);
s.push(56);
s.push(67);


}