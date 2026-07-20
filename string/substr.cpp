#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s= "abcdefrg";
     string ans ="";
     int maxlen = 0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
             int len = j-i+1;
             if(len > maxlen){
                maxlen = len;
                ans  = s.substr(i,len);
             }
        }
    }
     cout << ans << endl;




   return 0;
}