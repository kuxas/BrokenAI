#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string a, b;
  cin >> a >> b;
  string s = a + b;
  int x = stoi(s);

  int r = sqrt(x);

  cout << (r * r == x ? "Yes" : "No") << '\n';

  return 0;
}