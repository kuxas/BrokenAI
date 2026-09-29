#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n, k;
  cin >> n >> k;

  ll r = n % k;
  cout << (r < k - r ? r : k - r) << '\n';  
  return 0;
}