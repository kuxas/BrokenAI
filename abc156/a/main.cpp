#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, r;
  cin >> n >> r;

  int k = 0;
  if (n < 10) {
    k = n;
    cout << r + (100 * (10 - k)) << '\n';
  }
  else cout << r << '\n';

  return 0;
}