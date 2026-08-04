#include <iostream>
using namespace std;

int main() {
    int nums1[6] = {1, 3, 5};
    int nums2[3] = {2, 4, 6};

    int m = 3;   // valid elements in nums1
    int n = 3;   // elements in nums2

    int i = 0, j = 0;
    int capacity = 6;

    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) {

            // Shift elements to the right
            for (int k = m; k > i; k--) {
                nums1[k] = nums1[k - 1];
            }

            // Insert current element from nums2
            nums1[i] = nums2[j];

            m++;
            j++;
            i++;
        }
        else {
            i++;
        }
    }

    // Copy remaining elements of nums2
    while (j < n && m < capacity) {
        nums1[m] = nums2[j];
        m++;
        j++;
    }

    // Print merged array
    for (int i = 0; i < m; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}