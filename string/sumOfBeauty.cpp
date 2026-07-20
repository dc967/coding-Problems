#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "aaac";
    int totalBeauty = 0;
    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){
            string sub = s.substr(i, j-i+1);

            unordered_map<char,int> mp;

      for(char ch : sub){
         mp[ch]++;
      }
         
         int maxs = INT_MIN;
         int mins = INT_MAX;
      for(auto it : mp){
          maxs = max(maxs, it.second);
          mins = min(mins, it.second);
      }
     int beauty = maxs - mins;
          totalBeauty += beauty;
    

        }
    }
       cout << totalBeauty << endl;






   return 0;
}