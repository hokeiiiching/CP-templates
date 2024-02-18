// Check if given number n is prime
// O (sqrt(n)) time
#include <bits/stdc++.h>
using ll = long long;
bool prime(ll n) {
    if (n < 2) return false;
    for (ll x = 2; x*x <= n; ++x) {
        if (n%x==0) return false;
    }
    return true;
}