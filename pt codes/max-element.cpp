#include <iostream>
using namespace std;

int main() {
    int max, n, a[100], maxPos;
    
    cout << "Enter the array size: ";
    cin >> n;
    
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    max = a[0];
    maxPos = 0; // Initialize max position to the first element index
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i]; // Update max if a[i] is greater
            maxPos = i; // Update max position
        }
    }
    
    cout << "The max element is: " << max << endl;
    cout << "The max element is found in position: " << maxPos << endl;

    return 0;
}

