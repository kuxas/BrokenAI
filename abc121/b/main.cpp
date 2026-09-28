#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, m, c;
  cin >> n >> m >> c;
  vector<int> b(m);
  rep(i, m) {
    cin >> b[i]; 
  }
  
  vector<vector<int>> a(n, vector<int>(m));
  int cnt = 0;
  rep(j, n) {
    int sum = 0;
    rep(i, m) {
      cin >> a[j][i];
      sum += a[j][i] * b[i];
    }
    if (sum + c > 0) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}