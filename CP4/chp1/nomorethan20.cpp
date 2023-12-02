// Given a list of sorted ints L  of size up to 1M items, determine whether a value v exists in L with no more than 20 comparisons
// Use binary search
// why it works:
// binary search has a worst TC of O(log n). When n = 1M, assuming worst case scenario, O(log 1M) = 6. Hence, <=6 comparisons

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;

int main() {
    int n = 5, L[] = {10, 7, 5, 20, 8}, v = 7;
    sort (L, L+n);
    printf("%d\n", binary_search(L, L+n, v));
}