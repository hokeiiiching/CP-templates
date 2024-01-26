void sieve() {
  
  int sieve[n];
  sieve[0] = 1;
  sieve[1] = 1;
  for (int i = 2; i < n; ++i) {
    sieve[i] = 0;
  } 
  for (int x = 2; x <= n; ++x) {
    if (sieve[x]) continue;
    for (int u = 2*x; u <= n; u += x) {
      sieve[u] = x;
    }
  }
  
}
