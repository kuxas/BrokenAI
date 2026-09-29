#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;

  bool ok = true;
  int cnt = 0;
  while(ok) {
    if (a == b && b == c) {
      if (a % 2 != 0) ok = false;
      else {
        cout << -1 << '\n';
        return 0;
      }
    }
    else  {
      int x = a % 2, y = b % 2, z = c % 2;
      if ((x + y + z) >= 1) ok = false;
      else {
        int i = a / 2, j = b / 2, k = c / 2;
        a = j + k;
        b = i + k;
        c = i + j;
        cnt++;
      }
    }
  }
  cout << cnt << '\n';
  return 0;
}