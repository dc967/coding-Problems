#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     Node(int data1, Node* next1){
        data= data1;
        next = next1;
     }

     Node(int data1){
        data = data1;
        next = nullptr;
     }
};



int main()
{
        int node = 5;
     vector<int> arr = {4,5,1,9};
    

     Node* a = new Node(arr[0]);
    Node* b = new Node(arr[1]);
      Node* c = new Node(arr[2]);
      Node* d = new Node(arr[3]);


      a->next = b;
      b->next = c;
      c->next = d;
      d->next = nullptr;

    


     Node* temp = a;
     Node* prev = nullptr;
      
     while(temp != nullptr){
        if(temp->data == node){
            if(prev == nullptr){
                a = temp-> next;
            }else{
                prev->next = temp->next;
            }
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
     }






      temp = a;
     while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
     }
       

   return 0;
}