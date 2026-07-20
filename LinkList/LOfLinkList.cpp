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

  int lengthoflinklist(Node* head){
    Node* temp = head;
    int cnt = 0;
    while (temp)
    {
        temp= temp->next;
        cnt++;
    }
     return cnt;
  }

  int searchInLinklist(Node* head,int key){
      Node* temp = head;
      while(temp != nullptr){
        if(temp->data == key){
            return 1;
        }
        temp = temp->next;
      }
      return 0;
  }




int main()
{
    vector<int> arr = {2,4,7,9};

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1;i<arr.size();i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }


     cout << lengthoflinklist(head) << endl;
     cout << searchInLinklist(head , 7) << endl;




   return 0;
}