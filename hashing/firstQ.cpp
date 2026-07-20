#include<iostream>
using namespace std;
int main()
{
   int arr[6] = {1,3,4,1,1,6};
     int number  = 3;

     int count  = 0 ;
     for(int i=0; i<6; i++){
        if(arr[i] == number){
            count++;
        }
     }

     cout<<count<<endl;

   return 0;
}