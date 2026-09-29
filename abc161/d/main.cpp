#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

/*
ll bfs(ll k) {
  //初期条件
  vector<int> queue = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  while((int)queue.size() < k) {
  rep(i, queue.size()) {
    ll d = queue[i] % 10;
    for (ll nd : {d - 1, d, d + 1}) {
      if (0 <= nd && nd <= 9) {
        ll nx = queue[i] * 10 + nd;
        queue.push_back(nx);
      }
    }
  }
  sort(queue.begin(), queue.end());
  }
  
  ll ans = queue[k - 1];
  return ans;
  
}
*/

ll bfs(ll k) {
  queue<ll> q;

  for (ll i = 1; i <= 9; i++) q.push(i);

  for (ll i = 0; i < k - 1; i++) {
    ll x = q.front();
    q.pop();

    ll d = x % 10;

    for (ll nd : {d - 1, d, d + 1}) {
      if (0 <= nd && nd <= 9) {
        ll nx = x * 10 + nd;
        q.push(nx);
      }
    }
  }
  return q.front();
}

int main() {
  int k;
  cin >> k;

  cout << bfs(k) << '\n';
  return 0;
}