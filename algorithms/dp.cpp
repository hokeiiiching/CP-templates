#define LSOne(S) ((S) & -(S))  // important speedup

double dp(int mask) {  // DP satte = mask
  double &ans = memo[mask];  // reference/alias
  if (ans > -0.5) return ans;  // this has been computed
  if (mask == 0) return 0;  // all have been matched
  ans = 1e9;  // init with a large value
  int two_pow_p1 = LSOne(mask);  // speedup
  int p1 = __builtin_ctz(two_pow_p1);  //p1 is first on bit
  int m = mask-two_pow_p1;  // turn off bit p1
  while (m) {
    int two_pow_p2 = LSOne(m);  //then, try to match p1
    int p2 = __builtin_ctz(two_pow_2);  // with another on bit p2
    ans = min(ans, dist[p1][p2] + dp(mask^two_pow_p2));
    m -= two_pow_p2;  // turn off bit p2
  }
  return ans;  // memo[mask] == ans
}
