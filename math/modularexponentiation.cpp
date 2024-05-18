/*
Sample code to find the LAST DIGIT of b^n
using the Exponentiation by Squaring algorithm

In this example, b == 1378. Just change base to be the last digit of the number.
*/


#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int result = 1; // Initialize to 1 since any number to the power of 0 is 1
    int base = 8;   // Last digit of 1378 is 8. Only last digit is relevant

    while (n > 0) {
        if (n % 2 == 1) {
            // If n is odd, multiply the result with the current base and take mod 10
            result = (result * base) % 10;
        }
        // Square the base and take mod 10
        base = (base * base) % 10;
        // Divide n by 2
        n /= 2;
    }

    cout << result;
    return 0;
}
