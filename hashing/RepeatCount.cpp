#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> num = {1,2,3,1,1,4};

    int n = num.size();
    unordered_map<int ,int> mp;

    for(int I : num){
        mp[I]++;
    }

      bool found = false;
    for(auto it : mp){
      if(it.second >= 3){
         found = true;
         break;
      }
     
    }
    
    if(found){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }





   return 0;
}