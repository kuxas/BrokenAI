#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  rep (i, n) {
    cin >> x[i];
  }

  int ans = INT_MAX;

  for (int p = 1; p <= 100; p++) {
    int sum = 0;
    rep (j, n) {
      sum += (x[j] - p) * (x[j] - p);
    }
    ans = min (sum, ans);
    
  }
  cout << ans << '\n';
  return 0;
}