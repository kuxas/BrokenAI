#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int m_1, d_1, m_2, d_2;
  cin >> m_1 >> d_1 >> m_2 >> d_2;

  if (m_1 != m_2 && d_2 == 1) cout << 1 << '\n';
  else cout << 0 << '\n';
  return 0;
}