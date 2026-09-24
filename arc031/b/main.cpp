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

int dfs(vector<vector<char>> &a, int y, int x) {
  visited[y][x] = true;
  int cnt = 1;

  rep(k, 4) {
    int ny = y + dy[k];
    int nx = x + dx[k];

    if (ny < 0 || ny >= 10 || nx < 0 || nx >= 10) continue;
    if (a[ny][nx] == 'x') continue;
    if (visited[ny][nx]) continue;

    cnt += dfs(a, ny, nx);
  }
  return cnt;
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
        a[i][j] = 'o';

        mamset(visited, false, sizeof(visited));

        int reached = dfs(a, i, j);

        if (reached == count_land + 1) {
          cout << "YES" << '\n'
          return 0;
        }
        
        a[i][j] = 'x';

      }
    }
  }
  
  
  return 0;
}