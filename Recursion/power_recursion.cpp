#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int power(int i, int j) {

    // Base case
    if (j == 0) {
        return 1;
    }
    if (j == 1) {
        return i;
    }
    int ans = power(i, j/2);
    if (j % 2 == 0) {
    return ans * ans;
    }
    else {
    return i * ans * ans;
}
}

int main() {

   int i;
   int j;
    cout <<"enter value of i and j : ";
    cin >> i >> j;
   int ans = power(i,j);
   cout << ans;
    return 0;
}