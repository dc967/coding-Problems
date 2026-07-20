#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    vector<vector<int>> matrix = {
         {3,4,5},
         {4,7,8},
         {9,3,1}
    };

    int row = matrix.size();
    int col = matrix[0].size();

    for(int j=0; j<col; j++){
        int sum = 0;
        for(int i=0; i<row; i++){
            sum += matrix[i][j];
        }
        cout << " col " << j << " sum = " << sum << endl;
    }



   return 0;
}