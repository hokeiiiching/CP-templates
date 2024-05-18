#include <bits/stdc++.h>
using namespace std;

int primes[4] = {2, 3, 5, 7}; // divisors
int n = 100; // numbers that are checked whether they are divisible by the divisors or not

//idx always 0
// d always 1 (also called lcmSoFar)
// note that here, n is hard-coded to be 100. In questions, it usually is not
// to counter this, in inc_exe, there is a fourth parameter, ll range, used to store the total number of elements that are being checked whether they are divisible
int inc_exe(int idx = 0, int d = 1, int sign = -1)
{
    // when index reaches the max number of divisors
    if (idx==4) {
        if (d==1) return 0; // nothing selected (remove this line for complement)
        return sign*n/d;
    }
    // always returning 2 recursive call stacks
    // both will have index incremented
    // one will have the same sign and same d == lcmSoFar
    // the other one, sign is reversed, lcmSoFAr will be multipled to include with the CURRENT element(divisor) that is being checked  

    return inc_exe(idx+1, d, sign) + inc_exe(idx+1, d*primes[idx], sign*-1);
}

int main() {
    cout << inc_exe();
    return 0;
}