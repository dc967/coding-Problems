#include<bits/stdc++.h>
using namespace std;

 class Node{
      public:
      int data;
      Node* next;

      Node(int data1, Node* next1){
        data = data1;
        next = next1;
      }

      Node(int data1){
        data = data1;
        next = nullptr;
      }
 };
int main()
{
     int value = 5;
    vector<int> arr = {0,1,2};
   Node* a = new Node(arr[0]);
    Node* b = new Node(arr[1]);
     Node* c = new Node(arr[2]);
     Node* d = new Node(value);


      a->next = b;
      b->next = c;
      c-> next = nullptr;
      d->next=a;

      Node* temp = d;

      while(temp != nullptr){
         cout << temp->data << endl;
         temp = temp->next;
      }
   








   return 0;
}