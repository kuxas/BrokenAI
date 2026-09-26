#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int x;
  cin >> x;

  vector<bool> dp(x + 1);
  dp[0] = true;
  
  rep (i, x) {
    if (!dp[i]) continue;
    for (int c = 100; c <= 105; c++) {
      if (i + c <= x) dp[i + c] = true;
    }
  }

  cout << (dp[x] ? 1 : 0) << '\n';
  return 0;
}