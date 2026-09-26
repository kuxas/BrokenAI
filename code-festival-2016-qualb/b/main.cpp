#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, a, b;
  string s;
  cin >> n >> a >> b >> s;

  int cnt = 0;
  int cnt_b = 0;
  rep (i, n) {
    if (s[i] == 'a') {
      if (cnt < a + b) {
        cnt++;
        cout << "Yes\n";
      }
      else cout << "No\n";
    }
    else if (s[i] == 'b') {
      if (cnt < a + b && cnt_b < b) {
        cnt++;
        cnt_b++;
        cout << "Yes\n";
      }
      else cout << "No\n";
    }
    else cout << "No\n";
  }

  return 0;
}