#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "education";
    int vowels = 0;
    int consonants = 0;

    for(char ch: s){
        ch = tolower(ch);
        if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u'){
           vowels++;
    }else{
        consonants++;
    }
    }
    cout << "vowels in string:" << vowels << endl;
    cout << "consonants in string" << consonants << endl;
    
   return 0;
}