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

  int x = n / 1.08;
  if (x * 108 / 100 != n && (x + 1) * 108 / 100 != n) cout << ":(\n";
  else if ((x + 1) * 108 / 100 == n) cout << x + 1 << '\n';
  else cout << x << '\n';
  return 0;
}