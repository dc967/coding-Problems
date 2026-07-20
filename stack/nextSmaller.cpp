#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    unordered_map<int ,int> m;
    stack<int> st;
     vector<int> ans;

    for(int i=nums2.size()-1;i>=0;i--){
        while(st.size() > 0 && st.top() >= nums2[i]){
            st.pop();
        }
       
        if(st.empty()){
             m[nums2[i]] = -1;
        }else{
            m[nums2[i]] = st.top();
        }
        
        st.push(nums2[i]);


        
         for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
         }

    }

    for(int x : ans){
        cout << x << " ";
    }




   return 0;
}