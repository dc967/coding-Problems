#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> expenses = {100,200,150,300,100};
   int buget = 500;
   int left = 0, right = 0;
   
   int maxlen = 0;
    int total = 0;
   while(right < expenses.size()){
         total += expenses[right];

         while(total > buget){
            total -= expenses[left];
            left++;
         }
         maxlen = max(maxlen ,right - left+1 );
         right++;
   }

   cout << maxlen;








   return 0;
}