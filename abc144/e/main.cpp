#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

bool judge (const vector<int> &a,const vector<int> &f, ll mid, int k) {
  int n = a.size();
  ll need_sum = 0;

  rep (i, n) {
    ll limit = mid / f[i];
    if (a[i] > limit) {
      need_sum += a[i] - limit;
      if (need_sum > k) return false;
    }
  }
  return need_sum <= k;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> f(n);

  rep(i, n) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  rep (i, n) {
    cin >> f[i];
  }
  sort (f.begin(), f.end(), greater<int>());
  
  //2分探索の実装
  ll low = 0;
  ll high = 1e18;

  while (low < high) {
    ll mid = (low + high) / 2;



    if (judge(a, f, mid, k)) {
      high = mid;
    }
    else {
      low = mid + 1;
    }
  }

  

  cout << low << '\n';
  return 0;
}