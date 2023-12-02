#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; scanf("%d\n", &N);
    while (N--) {
        char x[110]; // set size a bit larger
        scanf("0.%[0-9]...\n", &x); // '&' is optional here
        // partial regex capabilities are built into the C++ stl library
        printf("the digits are 0.%s\n", x);
   }
   return 0;
}