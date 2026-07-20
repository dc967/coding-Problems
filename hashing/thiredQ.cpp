#include<iostream>
using namespace std;
int main()
{

   string s = "abcdaabe";

   char c = 'a';
   int count  = 0;
   for(int i=0; i<s.size(); i++){
     if(s[i] == c){
        count++;
     }
   }

   cout << count << endl;


   return 0;
}