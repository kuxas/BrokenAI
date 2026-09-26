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

  if (s == "SAT") cout << 1 << '\n';
  else if (s == "FRI") cout << 2 << '\n';
  else if (s == "THU") cout << 3 << '\n';
  else if (s == "WED") cout << 4 << '\n';
  else if (s == "TUE") cout << 5 << '\n';
  else if (s == "MON") cout << 6 << '\n';
  else cout << 7 << '\n';
  return 0;
}