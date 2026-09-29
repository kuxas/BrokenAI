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
  vector<int> p(n);
  rep(i, n) cin >> p[i];

  int cnt = 0;
  for (int i = 1; i < n - 1; i++) {
    int mn = min({p[i - 1], p[i], p[i + 1]});
    int mx = max({p[i - 1], p[i], p[i + 1]});
    if (mn < p[i] && p[i] < mx) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}