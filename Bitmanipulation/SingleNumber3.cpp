#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> nums = {1,2,1,3,5,2,6};

   vector<int> ans;
   map<int,int> mp;
   for(int x : nums){
    mp[x]++;
   }

   for(auto it : mp){
    if(it.second == 1){
        ans.push_back(it.first);
    }
   }
 for(int x : ans){
    cout << x << " ";
 }



   return 0;
}