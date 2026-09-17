// Wap to find the sum of digits of a given number using recursion.
#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sumOfDigits(n);
    cout << "Sum of digits: " << result << endl;
    return 0;
}
