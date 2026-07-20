#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aabcbcdbca";
    int maxlen = 0;
     string substring = "";
    for(int i=0;i<s.size();i++){
        int hash[256] = {0};
        for(int j=i;j<s.size();j++){
            if(hash[s[j]] == 1) break;
            int len = j-i+1;
            if(len > maxlen){
                maxlen = len;
                substring = s.substr(i,len);
            }
            hash[s[j]] = 1;
        }
    }
    cout << substring << endl;
    cout << maxlen << endl;





   return 0;
}