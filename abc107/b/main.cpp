#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> a(h, vector<char>(w));

  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
    }
  }


  //同一行内すべての文字が同じか判断し同じならh_judgeに1を代入する
  vector<int> h_judge(h);
  for (int i = 0; i < h; i++) {
    bool ok = true;
    for(int j = 0; j < w; j++) {
      if (a[i][j] == '#') {
        ok = false;
        break;
      }
    }
    if (ok) h_judge[i] = 1;
  }
  
  //h_judgeに1が入っている行を削除
  for (int i = (h - 1); i >= 0; i--){
    if (h_judge[i] == 1){
      a.erase(a.begin() + i);
    }
  }

  vector<int> w_judge(w);
  rep (j, w) {
    bool ok = true;
    rep(i, a.size()) {
      if (a[i][j] == '#') {
        ok = false;
        break;
      }
    }
    if (ok) w_judge[j] = 1;
  }

  rep(i, a.size()) {
    for (int j = a[i].size() - 1; j >= 0; j--) {
      if (w_judge[j] == 1) {
        a[i].erase(a[i].begin() + j);
      }
    }
  
  }
  
  rep (i, a.size()) {
    rep (j, a[i].size()) {
      cout << a[i][j];
    }
    cout << '\n';
  }

  return 0;
}