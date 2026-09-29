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

  if (s[0] == s[1] || s[0] == s[2] || s[0] == s[3]) {
    for(int i = 1; i <= 3 ; i++) {
      if(s[i] == s[0]) {
        if (i == 1) {
          if (s[1] != s[2] && s[2] == s[3]) {
            cout << "Yes\n";
            return 0;
          }
          else break;
        }
        else if (i == 2) {
          if (s[2] != s[1] && s[1] == s[3]) {
            cout << "Yes\n";
            return 0;
          }
          else break;
        }
        else if (i == 3) {
          if (s[3] != s[1] && s[1] == s[2]) {
            cout << "Yes\n";
            return 0;
          }
          else break;
        }
      }
    }
  }
  cout << "No\n";
  return 0;
}