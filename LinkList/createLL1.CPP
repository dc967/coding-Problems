#include<bits/stdc++.h>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


void print(Node* head){
    Node* temp = head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
  
 int countNode(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
 }

 bool findElement(Node* head){
    int key = 30;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
           return true;
        }
         temp = temp->next;
    }
    return false;
 }

 Node* insertAtBeginning(Node* head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
 }

 Node* insertAtEnd(Node* head, int value){
    Node* newNode  = new Node(value);
    if(head == NULL){
        return newNode;
    }
     Node* temp = head;
     while(temp->next != NULL){
        temp = temp->next;
     }
     temp->next = newNode;
     return head;
 }

 Node* deleteFirstNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
 }

 Node* deleteLastNode(Node* head){
    if(head == NULL){
        return head;
    }
    
    Node* temp = head;



 }

int main()
{

  Node* head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);

   print(head);
     cout<<endl;
    cout<<countNode(head);
    cout<<endl;
    cout <<findElement(head);
    cout << endl;
   head = insertAtBeginning(head,5);
   print(head);
   cout << endl;
   head = insertAtEnd(head,7);
   print(head);
   cout << endl;
   head = deleteFirstNode(head);
   print(head);
   return 0;
}