#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s  = "23and42";


    int number = 0;
    for(char ch : s){

        if(!isdigit(ch)){
            break;
        }

      int digit = ch - '0';

      number = number * 10 + digit;

    }

   cout << number;









   /* int sign = 1;
    int i=0;

    if(s[i] == '-'){
        sign = -1;
        i++;
    }else if(s[i] == '+'){
        sign = 1;
        i++;
    }

     cout << "Sign: " << sign << endl;
    cout << "Number starts from: " << s.substr(i);*/




   /*for(auto ch : s){
    if(isspace(ch)){
        continue;
    }
    cout << ch;
   }*/
   
   return 0;
}