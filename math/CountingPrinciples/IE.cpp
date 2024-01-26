// How many ints 1-100 are divisible by 2,3,5,7?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{10000};
    int cnt2{0};
    for (int i2 = 0; i2 < 2; ++i2) {
        for (int i3 = 0; i3 < 2; ++i3) {
            for (int i5 = 0; i5 < 2; ++i5) {
                for (int i7 = 0; i7 < 2; ++i7) {
                    int d{1}; int elementsCnt{0}; 
                    // d : product of divisors
                    // elementsCnt: count of divisors

                    if (i2) d *= 2, ++elementsCnt;
                    if (i3) d *= 3, ++elementsCnt;
                    if (i5) d *= 5, ++elementsCnt;
                    if (i7) d *= 7, ++elementsCnt;

                    if (!elementsCnt) continue; // nothing selected

                    // IE principle: If odd # of divisors, sign is '1' (inclusion),
                    // if even #, sign is '-1' (exclusion) 
                    int sign = elementsCnt % 2 == 1 ? 1 : -1;
                    
                    cnt2 += sign*n / d; // Add/subtract the count of numbers divisible by the current combination of divisors
                }
            }
        }
    }
    // 16 iterations, regardless of size of n
    cout << cnt2 << '\n';
}

