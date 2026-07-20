#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<vector<int>> matrix = {
       {3,6,9},
       {2,4,6},
       {7,5,3}
   };

   int row = matrix.size();
   int col = matrix[0].size();

   for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
        if(matrix[i][j] % 2 == 0){
            cout << matrix[i][j];
        }
       }
   }











   return 0;
}