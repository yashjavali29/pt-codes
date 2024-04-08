#include <iostream>

using namespace std;

int reverseDigits(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    int reversedNum = reverseDigits(num);

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}

