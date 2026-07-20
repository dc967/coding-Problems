#include<bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {3,3,3,1,2,1,1,2,3,3,4};
   int n = arr.size();
   int maxlen = 0;

   for(int i=0; i<n; i++){
    set<int> st;
    for(int j=i; j<n; j++){
        st.insert(arr[j]);
        if(st.size() <= 2){
            maxlen = max(maxlen,j-i+1);
        }else{
            break;
        }
    }
   }

   cout << maxlen << endl;





   return 0;
}