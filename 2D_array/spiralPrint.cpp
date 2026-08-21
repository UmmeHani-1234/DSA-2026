#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> arr = {
        {1, 2, 3 ,6},
        {4, 5, 6, 3},
        {7, 8, 9,10}
    };
    int nRows = arr.size();
    int mCols = arr[0].size();
    int currentRow = 0;
    int currentCol = 0;
    int RowIteration = 0;
    int ColIteration = 0;
    int i,j,k,l;

    while(currentRow < nRows && currentCol < mCols){
    for (i = currentCol; i < mCols ; i++){
        cout << arr[currentRow][i] << " ";  
    } 
    currentCol = i;
    
    for (j = currentRow; j < nRows ; j++){
        cout << arr[i][currentCol] << " ";  
    } 
    currentRow = j;
    for (k = currentCol; k >= RowIteration ; k--){
        cout << arr[currentRow][k] << " ";  
    } 
    currentCol = k;
    for (l = currentRow; l >= ColIteration ; l++){
        cout << arr[l][currentCol] << " ";  
    } 
    ColIteration++;
    RowIteration++;
}
    