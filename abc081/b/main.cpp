#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);

  rep(i, n) {
    cin >> a[i];
  }

  int ans = 0;

  while (true) {
    // すべて偶数と仮定
    bool ok = true;
    // もし配列の中に一つでも奇数が存在するならループを抜ける
    rep(i, n) {
        if (a[i] % 2 == 1) {
            ok = false;
            break;
        }
    }
    if (!ok) break;
    /*全要素を2で割る処理をしたかったができなかった。本来するべき処理は下記
      rep(i, n) {
      a[i] /= 2;
      ans++;
    }
    */
    rep(i, n) {
        a[i] /= 2;
        ans++;
    }
  }
  

  cout << (ans + n - 1) / n << '\n';
  return 0;
}
