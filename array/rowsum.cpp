#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    vector<vector<int>> matrix = {
          {1,2,3},
          {4,5,6},
          {7,8,9}
    };
      
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i=0; i< row; i++){
        int sum = 0;
         for(int j=0; j<col; j++){
            sum += matrix[i][j];
         }
         cout << " Row " << i << " sum = " << sum << endl;
    }




   return 0;
}