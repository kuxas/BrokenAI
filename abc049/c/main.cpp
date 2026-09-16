#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string  s;
  cin >> s;

  //判定に使う単語（後ろから切るために逆順）
  vector<string> words = {"dream", "dreamer", "erase", "eraser"};

  //文字列の後ろから切っていく
  while (!s.empty()) {
    bool ok = false;
    for (auto &w : words) {
      if (s.size() >= w.size() && s.substr(s.size() - w.size()) == w) {
        s.erase(s.size() - w.size());
        ok = true;
        break;
      }
    }
    if (!ok) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}