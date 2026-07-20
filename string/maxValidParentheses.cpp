#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s  = "(1+(2*3)+((8)/4))+1";
     int count  = 0;
     int maxDepth = 0;

     for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            count++;
            maxDepth = max(maxDepth,count);
        }else if(s[i] == ')'){
            count--;
        }

       
     }
     cout << maxDepth << endl;

   return 0;
}