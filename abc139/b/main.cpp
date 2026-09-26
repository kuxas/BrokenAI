#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b;
  cin >> a >> b;

  if (b == 1) cout << 0 << '\n';
  else cout << (b - 2) / (a - 1) + 1 << '\n';
  return 0;
}