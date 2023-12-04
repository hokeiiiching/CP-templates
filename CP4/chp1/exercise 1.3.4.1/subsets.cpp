// Generate all possible subsets of {1, 2, ... , 20}, the first N = 20 positive integers
#include <bits/stdc++.h>
using namespace std;
#define LSOne(S) ((S) & -(S)) // notice the brackets, important speed up
int main() {
   int N = 20;
   for (int i = 0; i < (1<<N); ++i) {
    // 1 << N == 1 << 20 == 10000000000000000000000, 20 zeroes, in binary, i.e. 2^20 - 1
    int pos = i;
    
    // Finds indices of the set bits and prints them, generating subsets one by one
    while (pos) {
        int ls = LSOne(pos); // get least significant one bit of pos
        pos -= ls; // 
        printf("%d ", __builtin_ctz(ls));   // this idx is part of set
        // __builtin_ctz(ls) gets the position/index of ls, which represents an element included in the subset
        // __builtin_ctz returns the number of trailing zeroes in the binary representation of 'ls'
        
    }
    printf("\n");
   }
}
// Use bits in binary representation of i as indicators for including or excluding elements from the set
// Inner loop finds the indicies

// i = 3
// pos = 3 = 011
// int ls = LSONE(011) = 001
// pos = 011 - 001 =010
// __builtin_ctz(ls) = __builtin_ctz(001) = 0, LSB is at index 0
// {0}

// i =4
// pos = 4 = 100
// int ls = LSOne(100) = 100
// pos -= ls -> pos = 000
// since pos becomes 0 , loop exits , empty subset, no indices are printed

// i =5
// pos = 5 = 101
// int ls = LSOne(101) = 001
// pos = 101 - 001 = 100
//__builtin_ctz(001) = 0
// {0}
// when pos = 100, ls = 100, prints {2}
// subset is {0, 2}
