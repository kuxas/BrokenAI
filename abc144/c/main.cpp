#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n;
  cin >> n;

  ll min = n - 1;
  ll cnt = 0;
  
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      cnt = (i - 1) + (n / i - 1); // i,j方向の移動量
      if (cnt < min) {
        min = cnt;
      }
    }
  }

  cout << min << '\n';
  return 0;
}