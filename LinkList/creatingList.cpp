#include<bits/stdc++.h>
using namespace std;
 

class Node{
    public:
      int data;
      Node* Next;

      Node(int data1, Node* Next1){
        data = data1;
        Next = Next1;
      }
     
      Node(int data1){
        data = data1;
        Next = nullptr;
      }
};




int main()
{
   vector <int> s = {1,2,4,5,6};

   Node* a = new Node(s[0]);

   cout << a->data << endl;

   cout << a << endl;







   return 0;
}