#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  vector<int> water = {0};
  vector<int> sugar = {0};
  for (int i = 1; i * 100 <= f; i++) {
    water.push_back (a * i * 100);
    water.push_back (b * i * 100);
  }
  for (int i = 1; i * c <= f; i++) sugar.push_back(c * i);
  for (int i = 1; i * d <= f; i++) sugar.push_back(d * i);
  
  pair<int,int> ans = {100 * a, 0};
  int best = -1;

  for (int w: water) {
    for (int s: sugar) {
      if(w + s > f) continue;
      if(s > w * e / 100) continue;
      if(w == 0) continue;

      int con = 100 * s / (w + s);

      if (con > best) {
        best = con;
        ans = {w + s, s};
      }
    }
  }
  cout << ans.first << " " << ans.second << '\n';
  return 0;
}