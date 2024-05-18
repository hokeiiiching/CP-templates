// How many ints in 1 - 100 are divisible by 2, 3, 5 or 7?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{100};
    int cntl{0};

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            ++cntl;
        }
    }
    // O(n) 
    cout << cntl << '\n';
}