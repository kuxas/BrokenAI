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

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int x = i;
    int cnt = 0;
    while (x % 2 == 0) {
      x /= 2;
      cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << (1 << ans) << '\n';
  return 0;
}