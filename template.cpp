#include <bits/stdc++.h>        
using namespace std;
using ll = long long;    // Common data types                        
using vi = vector<int>;                                                                    
using vll = vector<ll>;
memset(memo, -1, sizeof memo);    // to init DP memo table
vi memo(n, -1);    // Alternative way
memset(arr, 0, sizeof arr);    // to clear array of ints
//Shortcuts for "common" constants
const int INF = 1e9;    // 10^9 = 1B is < 2^31 - 1, which is max size of int before int overflow
const int LLINF = 4e18; // 4*10^18 is < 2^63 - 1, which is max size of ll before ll overflow
const double EPS = 1e-9;    // a very small number

#define PB push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}
