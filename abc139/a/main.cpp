#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string s, t;
  cin >> s >> t;

  int cnt = 0;
  rep(i, 3) {
    if (s[i] == t[i]) {
      cnt++;
    }
  }

  cout << cnt << '\n';
  return 0;
}