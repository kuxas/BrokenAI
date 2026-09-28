#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll h, w;
  cin >> h >> w;

  cout << (h == 1 || w == 1 ? 1 :(h * w + 1) / 2 )<< '\n';

  
  return 0;
}
/*
冗長すぎたので書き直したコード

ll h, w;
cin >> h >> w;
cout << ((h + 1) / 2) * ((w + 1) / 2) << '\n';

*/