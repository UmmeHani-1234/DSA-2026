#include <iostream>
using namespace std;


int findElement(int arr[][4], int find){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (arr[i][j] == find){
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                return 0;
            }
        }
    }
    cout << "Element not found" << endl;
    return -1;
}

int main() {
    int arr[3][4] = {{1, 0, 0, 0}, {1, 2, 0, 0}, {0, 0, 0, 0}};
    int find = 2;
    findElement(arr , find);
     

    return 0;
}