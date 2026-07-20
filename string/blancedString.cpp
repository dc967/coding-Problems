#include<bits/stdc++.h>
using namespace std;
int main()
{

   string num = "24123";
   int n = num.length();
   int evensum =0;
    int oddsum = 0;

   for(int i=0; i<n; i++){
      if(i % 2 == 0){
        evensum += num[i] - '0';
      }else{
        oddsum += num[i] - '0';
      }

    
   }

     if(evensum == oddsum){
        cout << "true";
      }
     else{
        cout << "false";
     }



   return 0;
}