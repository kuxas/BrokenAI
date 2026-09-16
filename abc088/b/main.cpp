#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

// 奇数番目の和と偶数番目の和の差
int add_odd(vector<int> a, int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 1) sum += a[i - 1];
    else sum -= a[i-1];
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>()); //降順にソート

  int ans = add_odd(a, n);
  
  cout << ans << '\n';
  return 0;
}