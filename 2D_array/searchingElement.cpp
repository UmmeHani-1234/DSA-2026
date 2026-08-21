#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int target = 8;

    int nRows = arr.size();
    int nCols = arr[0].size();

    int s[2] = {0, 0};
    int e[2] = {nRows - 1, nCols - 1};

    int mid[2];

    while (s[0] <= e[0] && s[1] <= e[1])
    {
        mid[0] = (s[0] + e[0]) / 2;
        mid[1] = (s[1] + e[1]) / 2;

        int midRow = mid[0];
        int midCol = mid[1];

        if (arr[midRow][midCol] == target)
        {
            cout << "Found at: " << midRow << " " << midCol;
            return 0;
        }

        else if (arr[midRow][midCol] < target)
        {
            s[0] = midRow + 1;
            s[1] = midCol + 1;
        }
        else
        {
            e[0] = midRow - 1;
            e[1] = midCol - 1;
        }
    }

    cout << "Not Found";
}