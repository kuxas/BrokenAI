#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

// 入力された数がひとつ前の数より小さい場合にカウントする関数
int count_smaller(vector<int>& d) {
  int count = 1; // 最初の要素は常にカウントする
  for (int i = 1; i < (int)d.size(); i++) {  // for (int i = 1; i < d.size(); i++)1-indexだと使えない？
    if (d[i] < d[i - 1]) {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;

  vector<int> d(n);
  rep(i, n) cin >> d[i];
  sort(d.begin(), d.end(), greater<int>()); //降順にソート

  int ans = count_smaller(d);

  cout << ans << '\n';
  return 0;
}