#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N = 36;
    vector<int> ans;
    for(int i=1;i<=N;i++){
        if(N % i == 0){
            ans.push_back(i);
        }
    }
    for(int x : ans){
        cout << x << " ";
    }
   return 0;
}