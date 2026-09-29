#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  
  vector<int> d(n);
  for (int i = 1; i < n; i++) {
    d[i - 1] = abs(a[i] - a[i - 1]);
  }
  d[n - 1] = abs(k - a[n - 1]) + a[0];
  sort(d.begin(), d.end());
  d.pop_back();

  int sum = 0;
  rep(i, n - 1) {
    sum += d[i];
  }

  cout << sum << '\n';
  return 0;
}