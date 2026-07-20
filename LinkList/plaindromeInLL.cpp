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

bool checkplaindrome(vector<int> arr){
    int n = arr.size();
     int s = 0;
     int e = n-1; 

     while(s <= e){
        if(arr[s] != arr[e]){
            return false ;
        }
        s++;
        e--;
     }
     return true;
}

int main()
{

  vector<int> arr = {1,2,2,1};
  Node* head = new Node(arr[0]);
  Node* temp = head;

  for(int i=1; i<arr.size();i++){
    temp->next = new Node(arr[i]);
    temp= temp-> next;
  }


 cout << checkplaindrome(arr);





   return 0;
}