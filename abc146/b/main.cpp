#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<char> a = {'A','B','C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  rep (i, s.size()) {
    rep (j, 26) {
      if (s[i] == a[j]) {
        if (j + (n % 26) >= 26) {
          s[i] = a[j + (n % 26) - 26];
          break;
        }
        else s[i] = a[j + (n % 26)];
        break;
      }
    }
  }

  

  cout << s << '\n';
  return 0;
}
