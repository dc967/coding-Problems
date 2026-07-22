#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s){
      unordered_map<char,int> mp;

      for(char x : s){
        mp[x]++;
      }

      vector<pair<char,int>> v;
      for(auto it : mp){
        v.push_back(it);
      }

      sort(v.begin(),v.end(), [](pair<char,int>a , pair<char,int>b){
            return a.second > b.second;
      });

      string ans = "";
      for(auto it : v){
        ans.append(it.second,it.first);
      }
      return ans;
}

int main()
{
  
    string s = "tree";
   string result = frequencySort(s);
   cout << result ;


   return 0;
}