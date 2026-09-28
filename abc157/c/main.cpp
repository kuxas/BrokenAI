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

  vector<pair<int, int> a(m);
  int s, c;
  rep(i, m) {
    cin >> s >> c;
    a[i] = {s, c};
  }

  if (n == 1) {
    rep(i, 10) {
      rep(j, m) {
        
      }
    }
  }
  return 0;
}