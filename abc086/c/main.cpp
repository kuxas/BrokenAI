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
    vector<vector<int>> l(n, vector<int>(3));
    rep(i, n) {
        rep(j, 3) {
            cin >> l[i][j];
        }
    }
    if (n == 1) {
        if (l[0][0] < l[0][1] + l[0][2] || (l[0][0] - (l[0][1] + l[0][2])) % 2 == 1) {
            cout << "No\n";
            return 0;
        }
    }

    for(int i = 1; i < n; i++) {
        int t, x, y;
        t = l[i][0] - l[i - 1][0];
        x = abs(l[i][1] - l[i - 1][1]);
        y = abs(l[i][2] - l[i - 1][2]);
        if (t < x + y || (t - (x + y)) % 2 == 1) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}



