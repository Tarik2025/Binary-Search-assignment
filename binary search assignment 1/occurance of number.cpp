#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Example 1
    vector<int> arr1 = {1, 2, 3, 3, 4};
    int n1 = arr1.size();
    int low1 = 1;
    int high1 = n1 - 1;

    while (low1 < high1) {
        int mid1 = low1 + (high1 - low1) / 2;
        int count1 = 0;

        for (int num1 : arr1) {
            if (num1 <= mid1) {
                count1++;
            }
        }

        if (count1 > mid1) {
            high1 = mid1;
        } else {
            low1 = mid1 + 1;
        }
    }

    cout << "Output 1: " << low1 << endl;

    return 0;
}
