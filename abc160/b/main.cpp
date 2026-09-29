#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll x;
  cin >> x;

  int cnt_500 = 0;
  int cnt_5 = 0;
  if (x >= 500) {
    cnt_500 = x / 500;
    x %= 500;
    cnt_5 = x / 5;
  }
  else {
    cnt_5 = x / 5;
  }
  cout << cnt_500 * 1000 + cnt_5 * 5 << '\n';
  return 0;
}