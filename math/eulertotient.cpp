#include <bits/stdc++.h>
using namespace std;

// Note that if n is prime, phi(n) == n-1
int eulerTotient(int n) {
    int result = n;  // Initialize result as n

    // Consider all prime factors of n and subtract their multiples from result
    // borrows concept from sieve of eratosthenes, in that:
    // we remove every prime factor and its multiples from result 
    for (int p = 2; p * p <= n; ++p) {
        
        // Check if p is a prime factor.
        if (n % p == 0) {
            
            // If yes, then update n and result.
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    // Occurs when 1) n itself is prime or
    // 2) n is a product of 2 prime factors, where one of the prime factor is > than sqrt(n) e.g. 77
    if (n > 1)
        result -= result / n;

    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Euler's Totient Function of " << n << " is " << eulerTotient(n) << endl;
    return 0;
}
