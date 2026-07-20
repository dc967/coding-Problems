#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n = 12;
    int i = 1;

   if((n & (1 << i)) != 0){
    cout << "True" << endl;
   }
    else{
        cout << "false" << endl;
    }




   return 0;
}