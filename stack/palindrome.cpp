#include<iostream>
using namespace std;

    bool isPalindrome(int x){

         int orignal = x;
  int rev = 0;

  while(x > 0){
     int digit = x % 10;
     rev = rev * 10 + digit;
     x = x / 10;
  }if (rev==orignal){
    return true;
  }
return false;
}


int main()
{
int x=-121;
bool result=isPalindrome(x);
cout<<result<<endl;

   
  
   return 0;
}