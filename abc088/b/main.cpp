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
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int Alice = 0;
  int Bob = 0;
  rep(i, n) {
    if(i % 2 == 0) Alice += a[i];
    else Bob += a[i];
  }
  cout << Alice - Bob << '\n';
  return 0;
}