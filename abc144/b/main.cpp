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

  for (int i = 1; i <= 9; i++) {
  if (n % i == 0 && n / i < 10) {
    cout << "Yes\n";
    return 0;
    }
  }
  cout << "No\n";
  return 0;

}