#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    int direction=  0;


    for (int j = 0; j < mCols; j++)
    {
        if (direction == 0)
        {
            for (int i = 0; i < nRows; i++)
            {
                ans.push_back(arr[i][j]);
            }
            direction = 1;
        }
        else
        {
            for (int i = nRows - 1; i >= 0; i--)
            {
                ans.push_back(arr[i][j]);
            }
            direction = 0;
        }

    
    }

    return ans;
}
int main(){

    vector<vector<int>> arr = {
        {1, 2, 3 ,6},
        {4, 5, 6, 3},
        {7, 8, 9,10}
    };
    int nRows = arr.size();
    int mCols = arr[0].size();
        vector<int> ans = wavePrint(arr, nRows, mCols);

    for (int x : ans)
    {
        cout << x << " ";
    }
}
    