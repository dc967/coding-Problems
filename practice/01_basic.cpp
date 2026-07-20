#include<bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {2,5,8,9,6,3,1};
   
  int n = arr.size();
  stack<int> st;

  for(int i=0; i<n; i++){
    st.push(arr[i]);
  }
  
  while(!st.empty()){
    cout << st.top() << " ";
    st.pop();
  }





     
   return 0;
}