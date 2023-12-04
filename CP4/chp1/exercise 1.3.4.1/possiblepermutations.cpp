// Generate all possible permutations of {'A', 'B', 'C'... 'J'}, the first N = 10 letters in the alphabet
#include <bits/stdc++.h>
using namespace std;
int main() {
    int p[10], N = 10;
    for (int i = 0; i < N; ++i) p[i] = i; // Initialize an int array of size 10, each element is from 0 to 9
    do {
        for (int i = 0; i < N; ++i) printf("%c ", 'A'+p[i]);
        printf("\n");
    } while (next_permutation(p, p+N));
}