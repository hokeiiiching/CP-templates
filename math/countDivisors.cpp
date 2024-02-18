#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cnt_div(ll n) {
    ll cnt = 0;
    for (int i = 1; i*i <= n; ++i) {
        if (n%i==0) {
            ++cnt; // i is a factor

            if (i != n/i) ++cnt; // (n/i is also a factor, provided i isnt the "halfway" point of divisors)
        }
    }
    return cnt;
}

int main() {
    ll n; cin >> n;
    for (ll i = 1; i <= n; ++i) {
        cout << cnt_div(i) << '\n';
    }

}