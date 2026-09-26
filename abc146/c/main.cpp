#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int ketasuu(ll n) {
  int cnt = 0;
  while (n > 0) {
    cnt++;
    n /= 10;
  }
  return cnt;
}

bool judge(ll n, ll a, ll b, ll x) {
  return a * n + b * ketasuu(n) <= x;
}

int main() {
  ll a, b, x;
  cin  >> a >> b >> x;

  //x >= an + b x d(n)となるような最大のn

  ll low = 0;
  ll high = 1e9;

  
  while (low < high) {
    ll mid = (low + high + 1) / 2;

    if (judge(mid, a, b, x)) {
      low = mid;
    } else {
        high = mid - 1;
    }
  
  }


  cout << low << '\n';
  return 0;
}