#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n;
  int k;
  cin >> n >> k;

  int cnt = 0;
  while (n > 0) {
    n /= k;
    cnt++;
  }
  cout << cnt << '\n';
  return 0;
}