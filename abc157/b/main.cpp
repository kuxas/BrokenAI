#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  vector<vector<int>> a(3, vector<int>(3));
  rep(i, 3) {
    rep(j, 3) {
      cin >> a[i][j];
    }
  }
  int n;
  cin >> n;

  rep(i, n) {
    int b;
    cin >> b;
    rep(j, 3) {
      rep(k, 3) {
        if (a[j][k] == b) a[j][k] = 0;
      }
    }
  }

  rep(i, 3) {
    int cnt = 0;
    rep(j, 3) {
      if (a[i][j] != 0) break;
      else {
        cnt++;
        if (cnt == 3) {
          cout << "Yes\n";
          return 0;
        }
      }
    }
  }
  rep(i, 3) {
    int cnt = 0;
    rep(j, 3) {
      if (a[j][i] != 0) break;
      else {
        cnt++;
        if (cnt == 3) {
          cout << "Yes\n";
          return 0;
        }
      }
    }
  }
  if ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) || a[2][0] == a[1][1] && a[1][1] == a[0][2]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}