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

  vector<int> a(n);

  rep(i, n) {
    cin >> a[i];
  }

  int ans = 0;

  while (true) {
    bool ok = true;
    rep(i, n) {
        if (a[i] % 2 == 1) {
            ok = false;
            break;
        }
    }
    if (!ok) break;
    rep(i, n) {
        a[i] /= 2;
        ans++;
    }
  }
  

  cout << (ans + n - 1) / n << '\n';
  return 0;
}
