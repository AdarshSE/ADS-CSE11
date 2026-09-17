// Wap to reverse a given number using recursion.
#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int n) {
    if (n == 0)
        return 0;
    return (n % 10) * pow(10, to_string(n).length() - 1) + reverseNumber(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = reverseNumber(n);
    cout << "Reversed number: " << result << endl;
    return 0;
}