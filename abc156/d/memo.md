# abc156_d

ラムダ式
auto f = [&](変数) {

};
f という関数を作って変数 f に入れている
[&]は外側の変数を参照で使える
関数内に直接書くことができるので、コードを短くすることができる

modint(mint)
using mint = modint任意の数字；
mod計算を自動でやってくれる
modでは割り算を行う際、逆関数を考えないといけないが、mintを使うとそのまま割り算できるように処理してくれる
mint(a).pow(b)
a^bをmod付きで計算してくれる


自分で書いたコード
modの計算を忘れていた（そもそもなぜ使うのかわかっていなかった）
2のn乗でオーバーフロー
書いてる段階で想定していたがとりあえず書き上げたかった

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

ll comb(ll n, int x) {
  ll x_upper = 1;
  ll x_lower = 1;
  rep (i, x) {
    x_upper *= (n - i);
  }
  rep (i, x) {
    x_lower *= (i + 1);
  }
  ll ans = x_upper / x_lower;
  return ans;
}

int main() {
  ll n;
  int a, b;
  cin >> n >> a >> b;

  if (n == 2) {
    cout << 0 <<'\n';
    return 0;
  }

  ll sum = 1;
  rep (i, n) {
    sum *= 2;
  }
  
  ll comb_a = comb(n, a);
  ll comb_b = comb(n, b);

  cout << sum - comb_a - comb_b << '\n';
  
  
  return 0;
}