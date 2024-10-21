//Q3. Move all zeroes to end of array
#include<iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int size = sizeof(arr)/sizeof(arr[0]);

    int nonZeroIndex = 0;

    for(int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    for (int i = nonZeroIndex; i < size; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] <<", ";
    }

    return 0;
}