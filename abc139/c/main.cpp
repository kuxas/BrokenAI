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
  vector<int> h(n);
  rep(i, n) {
    cin >> h[i];
  }

  int cnt_MAX = 0;
  int cnt = 0;
  for (int i = 1; i < n; i++) {
    if (h[i - 1] >= h[i]) {
      cnt++;
    }
    if (h[i - 1] < h[i]) {
      cnt_MAX = max(cnt, cnt_MAX);
      cnt = 0;
    }
  }

  cnt_MAX = max(cnt, cnt_MAX);
  cout << cnt_MAX << '\n';
  return 0;
}