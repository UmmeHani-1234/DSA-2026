#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>> arr = {
        {1, 2, 3 ,6},
        {4, 5, 6, 3},
        {7, 8, 9,10}
    };
    int nRows = arr.size(); 
    int nCols = arr[0].size(); 
    vector<vector<int>> ans(nCols, vector<int>(nRows));
    int currentRow = 0;
    int currentCol = nRows - 1;

while (currentRow < nRows)
{
    for (int i = 0; i < nCols; i++)
    {
        ans[i][currentCol] = arr[currentRow][i];
    }

    currentRow++;
    currentCol--;
}    for (int i = 0;  i <nCols; i++){
        for(int j = 0; j< nRows; j++){
          cout << ans[i][j] << " ";
        }
         cout<< endl;
}

}