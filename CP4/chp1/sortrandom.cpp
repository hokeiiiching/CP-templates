// Given n random integers, print the distinct(unique) integers in sorted order

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define PB push_back
int main() {
    int n; scanf("%d\n", &n);
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (auto x : a) cout << x << " ";
    return 0;
    
}