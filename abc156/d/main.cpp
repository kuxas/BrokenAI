#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;



int main() {
  ll n;
  int a, b;
  cin >> n >> a >> b;

  using mint = modint1000000007;

  //(2^n)-1を行う.llで累乗計算をするとオーバーフローする可能性があるため. 
  mint ans = mint(2).pow(n) - 1;

  auto comb = [&](ll n, int k) {
    mint num = 1, den = 1;
    rep (i, k) {
      num *= (n - i);
      den *= (i + 1);
    }
    return num / den;
  };
 
  ans -= comb(n, a);
  ans -= comb(n, b);

  //ansはmint型になっているため.val()で値を返してあげる
  cout << ans.val() << '\n';

  return 0;
}