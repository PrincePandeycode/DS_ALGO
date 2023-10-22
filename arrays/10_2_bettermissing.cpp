#include <bits/stdc++.h>
using namespace std;

int MissingNum(int arr[], int n) {
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) {
            hash[arr[i]] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    // Deallocate the dynamically allocated memory
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;

    int miss = MissingNum(arr, n);

    cout << "Missing number is: " << miss;
}
