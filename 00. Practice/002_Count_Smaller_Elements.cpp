#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {12, 1, 2, 3, 0, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}