/* 2 important built-in bit manipulation functions:
1) __builtin_popcount(S) to count how many bits that are on in S
2) __builtin_ctz(S) to count how many trailing zeroes in S

e.g.
__builtin_popcount(32)      10000 (base 2), only 1 bit is on
__builtin_popcount(30)      11110 (base 2), 4 bits are on
__builtin_popcountl((1l<<62)-1l)        2^62 has 62 bits on (near limit)
__builtin_ctz(32)       10000, 5 trailing zeroes
__builtin_ctz(30)       11110, 1 trailing zero
__builtin_ctz(1l << 62)     2^62 has 62 trailing zeroes (duh)*/