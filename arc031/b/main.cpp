#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

//1.陸の総数を数える
//2.海マスを1つずつ陸に変えて試す
//3.DFSで到達できた陸の数を数える.

string umetate(vector<vector<char>> &a) {
  //ベースケース
  //元から一つの島だった場合
  
}

int main() {
  vector<vector<char>> a(10, vector<char>(10));
  rep (i, 10) {
    rep(j, 10) {
      cin >> a[i][j];
    }
  }

  //陸の総数を数える
  int count_land = 0;
  rep (i, 10) {
    rep (j, 10) {
      if (a[i][j] == 'o') {
        count_land++;
      }
    }
  }

  //海マスを一つずつ陸に変えて試す.
  //→海マスを一つ陸に変える→陸マスの数が元の陸数+1となっていればYES
  rep (i, 10) {
    rep (j, 10) {
      if (a[i][j] == 'x') {
        a[i][j] = o;

        

      }
    }
  }
  
  
  return 0;
}