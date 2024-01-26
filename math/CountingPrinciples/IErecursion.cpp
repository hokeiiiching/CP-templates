#include <bits/stdc++.h>
using namespace std;

int primes[4] = {2, 3, 5, 7};
int n = 100;

int inc_exe(int idx = 0, int d = 1, int sign = -1)
{
    if (idx==4) {
        if (d==1) return 0; // nothing selected (remove this line for complement)
        return sign*n/d;
    }
    return inc_exe(idx+1, d, sign) + inc_exe(idx+1, d*primes[idx], sign*-1);
}

int main() {
    cout << inc_exe();
    return 0;
}