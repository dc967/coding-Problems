#include<bits/stdc++.h>
using namespace std;
int main()
{
     
  vector<int> arr = {2,3,4,5,6};
  int n = arr.size();

  vector<int> st;
  for(int i=0; i<n; i++){
    st.push_back(arr[i]);
  }

  sort(arr.begin(),arr.end());

  if(arr == st){
    cout << "array is sorted" << endl;
  }else{
    cout << "array is not sorted" << endl;
  }








   return 0;
}