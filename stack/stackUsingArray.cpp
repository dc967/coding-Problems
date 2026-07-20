#include<bits/stdc++.h>
using namespace std;

int A[5];
int n = 5;
int top = -1;

void push(int val){
    if(top == n-1){
       cout << "stack overflow";
    }else{
        top++;
        A[top] = val;
    }
}

void display(){
    for(int i=0;i<=top;i++){
        cout << A[i] << " ";
    }
}

void pop(){
    if(top == -1){
      cout << "stack underflow";
    }else{
        top--;
    }
}

bool isempty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

void show_top(){
    if(top == -1){
        cout << "satck is empty";
    }else{
        cout << "top element is :"<< A[top] << endl;
    }
}



int main()
{
   
   push(2);
   push(3);
   push(4);
   push(5);
   display();
   pop();
   pop();
   display();
   show_top();
   return 0;
}