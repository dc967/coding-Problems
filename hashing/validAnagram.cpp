#include<bits/stdc++.h>
using namespace std;
int main()
{

 string s = "listen";
 string t = "silen";

 if(s.length() != t.length()){
    cout << "Not anagram";
    return 0;
 }

 unordered_map<char , int> mp;
 unordered_map<char,int> mp2;

 for(int i=0;i<s.length();i++){
    mp[s[i]]++;
    mp2[t[i]]++;
 }
   
 for(int i=0;i<s.length();i++){
    if(mp[s[i]] != mp2[s[i]]){
        cout << "not anagram";
        return 0;
    }
 }
 cout << "yes it is anagram";










   return 0;
}