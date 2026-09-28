#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k;
  cin >> n >> k;

  int sum = 0;
  rep(i, n) {
    int a, b, x;
    cin >> x;
    a = abs(0 - x);
    b = abs(x - k);
    int l = min(a, b);
    sum += l * 2;
  }
  cout << sum << '\n';
  return 0;
}