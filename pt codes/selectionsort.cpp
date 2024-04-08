#include<iostream>
using namespace std;

int main() {
    int arr[100], i, j, min_index, n;

    cout << "Please enter the array size: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        // Swap only if min_index is different from i
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
