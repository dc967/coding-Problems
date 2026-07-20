#include<bits/stdc++.h>
using namespace std;
int main()
{
     
    vector<int> val = {60,100,120};
    vector<int> wt = {10,20,30};
    int capacity = 50;

    int sum = 0;
    int totalweight = 0;

    for(int i=0; i<wt.size();i++){
         if(totalweight + wt[i] <= capacity){
            totalweight += wt[i];
            sum += val[i];
         }
    }
    cout << sum << endl;






   return 0;
}