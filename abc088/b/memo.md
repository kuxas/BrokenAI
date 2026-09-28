# abc088_b

26/09/28　追記
再挑戦

以前のコードは下に添付
問題なくAC

using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

// 奇数番目の和と偶数番目の和の差
int add_odd(vector<int> a, int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 1) sum += a[i - 1];
    else sum -= a[i-1];
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>()); //降順にソート

  int ans = add_odd(a, n);
  
  cout << ans << '\n';
  return 0;
}

前回感じた関数の利便性を確かめるために関数を実装.
短いプログラムだとあまり実装するメリットが見られなかった.
今後も練習を行い自分の中で基準を作っていく.

copilotに今回のコードを見てもらい最適化した.

int add_odd(const vector<int>& a) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) sum += a[i];  // 0-index の偶数 → 1番目,3番目...
        else sum -= a[i];
    }
    return sum;
}

今回奇数を足したかったため1-indexを利用したが,0-indexでも処理は変わらない上,理解しやすくなるため
0-indexを利用したほうがよかった.
forの条件式にa.size()を渡すことでnを利用しなくて済む.
こちらのほうが都合がよさそう.

1行目に関して,値渡しではなく参照渡しを利用することにより高速に処理することができる....
らしい.理解はできていないので今後の課題としてあげておく.
constを付けると関数内でaを変更できなくなり読み取専用になる.
