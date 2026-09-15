#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;

  int ans = 0;

  rep(i, s.size()) {
    if (s[i] == '1') ans++;
  }

  cout << ans << '\n';
  return 0;
}