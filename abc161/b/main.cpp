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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int sum = 0;
  rep(i, n) {
    sum += a[i];
  }

  rep(i, m) {
    if(a[i] * (4 * m) < sum) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}