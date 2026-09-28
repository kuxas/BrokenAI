#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<ll, int>> c(n); //店 c[i] での商品の値段と個数を記録
  ll a;
  int b;
  rep(i, n) {
    cin >> a >> b;
    c[i] = {a, b};
  }
  sort(c.begin(), c.end());

  int cnt = 0;
  ll cost = 0;
  rep(i, n) {
    if (cnt + c[i].second <= m) {
      cost += c[i].first * c[i].second;
      cnt += c[i].second;
    }
    else {
      while (cnt < m) {
        cost += c[i].first;
        cnt += 1;
      }
      /*
      while文を使わずに書くこともできる
      int buy = min(c[i].second, (m - cnt));
      cost += buy * c[i].first;
      cnt += buy;
      */
      break;
    }
  }
  cout << cost << '\n';
  return 0;
}