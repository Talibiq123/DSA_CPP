#include<iostream>
#include<climits>

using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] >largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Second Largest Element: " << second_largest << endl;
    }

    return 0;
}