#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> price = {7,1,5,3,6,4};
   int minprof = price[0];
   int maxprof = 0;
   for(int i=0; i<price.size(); i++){
       maxprof = max(maxprof, price[i]-minprof);
       minprof = min(minprof,price[i]);
   }

   cout << maxprof;



   return 0;
}