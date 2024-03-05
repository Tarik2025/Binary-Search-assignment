#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    long long left = 0;
    long long right = n;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long curr = mid * (mid + 1) / 2;

        if (curr == n) {
            return mid;
        } else if (curr < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return right; // Right represents the maximum number of complete rows
}

int main() {
    cout << "Example 1: " << arrangeCoins(5) << endl;
    cout << "Example 2: " << arrangeCoins(8) << endl;

    return 0;
}
