#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "programming";
    char ch = 'g';
    int n = s.length();
    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i] == ch){
            count++;
        }
    }
    cout << count ;
   return 0;
}