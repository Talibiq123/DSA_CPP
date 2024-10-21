#include<iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {6, 8, 1, 9, 2, 1, 10, 10};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int third_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            third_largest = second_largest;
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
                third_largest = second_largest;
                second_largest = arr[i];
        } else if (arr[i] > third_largest && arr[i] < second_largest) {
            third_largest = arr[i];
        }
    }

    if (third_largest == INT_MIN) {
        cout << "There are no three distinct elements.";
    } else {
        cout << "Largest Element: " << largest << endl;
        cout << "Second Largest Element: " << second_largest << endl;
        cout << "Third Largest Element: " << third_largest << endl;
    }

    return 0;
}