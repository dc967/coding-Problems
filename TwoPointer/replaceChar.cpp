#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "AABABBA";
    int k = 1;
    int n = s.length();
    int maxlen = 0;
    for(int i=0;i<n;i++){
        vector<int> freq(26,0);
        int maxfreq = 0;
        for(int j=i ; j<n; j++){
            freq[s[j] - 'A']++;
            maxfreq = max(maxfreq, freq[s[j] - 'A']);
            int windowlen = j-i+1;
            int replace = windowlen - maxfreq;

            if(replace <= k ){
                maxlen = max(maxlen , windowlen);
            }
        }
    }

   cout << maxlen << endl;

   return 0;
}