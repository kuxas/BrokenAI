#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  vector<vector<int>> c(3, vector<int>(3));
  rep(i, 3) cin >> c[i][0] >> c[i][1] >> c[i][2];

  for (int a0 = 0; a0 <= 100; a0++) {
    vector<int> a(3), b(3);
    a[0] = a0;

    rep(j, 3) b[j] = c[0][j] - a[0];
    rep(i, 3) a[i] = c[i][0] - b[0];

    bool ok = true;
    rep(i, 3) {
      rep(j, 3) {
        if (a[i] + b[j] != c[i][j]) ok = false;
      } 
    }
    if (ok) {
        cout << "Yes\n";
        return 0;
    }
  }

  cout << "No\n";
  return 0;
}