#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

/*失敗作
vector<int> jud(int n, int y) {                     引数yを再宣言してしまっている  
  int x, y, z;

  for (x = 0; x <= n ; x++) {
    for (y = 0; y <= n - x ; y++) {
      z = n - x - y;
      if (10000 * x + 5000 * y + 1000 * z == y) {
        return {x, y, z};                           最初int型で宣言していたため返り値がvector型で返せずエラーになった
      }
    }
  }
  return {-1, -1, -1};
}

int main() {
  int n ,y;
  cin >> n >> y;

  vector<int> ans(3, 0);

  ans = jud(n, y);

  cout << ans[0] << " " << ans[1] << " " << ans[2] << '\n';
  return 0;
}
  
*/

int main() {
  int n ,y;
  cin >> n >> y;

  for (int a = 0; a <= n; a++) {
    for (int b = 0; b <= n - a; b++) {
      int c = n - a -b;
      if (10000 * a + 5000 * b + 1000 * c == y) {
        cout << a << " " << b << " " << c << '\n';
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << '\n';
}
