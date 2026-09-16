#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  //  
  int ans = 0;
  rep(i, n) {
    string s = to_string(i + 1);  // 初期条件より1以上にする。
    int sum = 0;

    //各位の和を計算
    rep(j, s.size()) {
      sum += s[j] - '0';
    }

    // sumがa以上b以下ならansに加算
    if (sum >= a && sum <= b) {
      ans += i + 1;
    }
  }

  

  cout << ans << '\n';
  return 0;
}