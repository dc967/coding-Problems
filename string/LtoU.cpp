#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "coding";
    
   for(char ch : s){
    ch = ch - 32;
    cout << ch ;
   }
   
   return 0;
}