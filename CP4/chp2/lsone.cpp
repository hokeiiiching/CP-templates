#define LSOne(S) ((S) & -(S))
/* Produces the first Least Significant One-bit in S
First, recall what the bitwise AND & operator does
x |  y |  x AND y 
T |  T |     T
T |  F |     F
F | T |      F
F | F |      F

For example, LSOne(90) = 
((000..... 1 011 010)   
& 
(111.... 0 100 110) )
==
0 000 010 
-> Least significant one bit is 2.
*/


/* note:
-(S) == NOT(S) + 1
least significant means rightmost. */
