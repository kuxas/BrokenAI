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

  int cnt = 0;
  string a = "CODEFESTIVAL2016";
  rep(i, s.size()) {
    if (s[i] != a[i]) {
      s[i] = a[i];
      cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}