#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b;
  cin >> a >> b;

  if (a <= 9 && b <= 9) {
    cout << a * b << '\n';
    return 0;
  }
  else cout << "-1\n";
  return 0;
}
