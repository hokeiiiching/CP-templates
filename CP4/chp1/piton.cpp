// Given an integer n (n <= 15), print pi to n digits after the decimal point (rounded)

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    printf("%.*lf\n", n, M_PI); // adjust field width
}
// %.*lf is a format specifier used to print a floating-point number with a variable precision specified by the integer argument 'n'