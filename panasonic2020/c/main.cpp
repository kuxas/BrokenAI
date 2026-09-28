#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;

  if (c > a + b && 4 * a * b < (c - a - b) * (c - a - b)) cout << "Yes\n";
  else cout << "No\n"; 

  return 0;
}