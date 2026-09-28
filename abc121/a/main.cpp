#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int H, W, h, w;
  cin >> H >> W >> h >> w;

  cout << (H - h) * (W - w) << '\n';
  return 0;
}