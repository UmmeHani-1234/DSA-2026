#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int nRows = matrix.size();
    int nCols = matrix[0].size();

    int colIndex = nCols - 1;

    for (int rowIndex = 0; rowIndex < nRows && colIndex >= 0; )
    {
        int element = matrix[rowIndex][colIndex];

        if (element == target)
            return true;
        else if (element > target)
            colIndex--;
        else
            rowIndex++;
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target = 8;

    if (searchMatrix(matrix, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}