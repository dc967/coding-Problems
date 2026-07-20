#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> nums = {4,1,2,1,2};

   unordered_map<int,int> mp;

   for(int x : nums){
    mp[x]++;
   }

   int maxcount = INT_MIN;
   int maxelement = -1;

   for(auto it : mp){
    if(it.second > maxcount){
        maxcount = it.second;
        maxelement = it.first;
    }
   }
  
   cout << maxelement << endl;






   return 0;
}