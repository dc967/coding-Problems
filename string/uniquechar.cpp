#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s= "aabb";
  map<char,int> mp;

  for(char ch : s ){
    mp[ch]++;
  }

     for(int i=0;i<s.length();i++){
        if(mp[s[i]] == 1){
            cout << i << endl;
            return 0;
        }
     }
     cout << "-1" << endl;

     


   return 0;
}