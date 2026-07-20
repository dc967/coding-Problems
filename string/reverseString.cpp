#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main()
{

   string s  = "the sky is blue";

   stringstream ss(s);
   vector<string> ans;
   string word;

   while(ss >> word){
     ans.push_back(word);
   }

    for(int i=ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }


   return 0;
}
