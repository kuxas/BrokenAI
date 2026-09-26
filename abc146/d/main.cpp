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
  vector<int> a(n - 1);
  vector<int> b(n - 1);


  rep(i, n - 1) {
    cin >> a[i] >> b [i];
  }

  //隣接リスト作成
  vector<vector<pair<int,int>>> g(n); //頂点nに対して<行先、辺の番号>が収納される行列
  
  rep (i, n - 1) {
    int u = a[i] - 1; //頂点a[i]を0-indexに変換
    int v = b[i] - 1; 

    g[u].push_back({v, i}); //頂点uは辺iで頂点vとつながっている
    g[v].push_back({u, i});
  }
  
  //必要な色の数を求める
  int k = 0;
  rep(i, n) {
    k = max(k, (int)g[i].size()); //g[i].size()ではsize_t型で出力されるためintに変換する
  }


}