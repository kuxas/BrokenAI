#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;

  cout << (s[3 - 1] == s[4 - 1] && s[5 - 1] == s[6 - 1] ? "Yes" : "No") << '\n';
  return 0;
}