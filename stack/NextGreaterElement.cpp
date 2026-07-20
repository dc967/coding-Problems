#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> arr = {1,3,4,2};
     stack<int> s;
     
     int n = arr.size();
     vector<int> ans(n);
     for(int i=n-1;i>=0;i--){
        while(s.size() > 0 && s.top() <= arr[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
     }
    
     for(int val: ans){
        cout << val << " ";
     }







   return 0;
}