#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> arr = {5,2,11,7,15};
   int target = 9;
   int n = arr.size();

   unordered_map<int,int> mp;
   for(int i=0;i<n;i++){
      int first = arr[i];
      int second = target - first;
      if(mp.find(second) != mp.end()){
        cout << i << mp[second] << endl;
      }
      mp[first] = i;
   }




   return 0;
}