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
    vector<vector<int>> a(n, vector<int>(3));

    rep(i, n) {
        rep(j, 3) cin >> a[i][j];

        int t = a[i][0];
        int x = a[i][1];
        int y = a[i][2];

        if (i == 0) {
            int dist = abs(x) + abs(y);
            if (dist > t) {
                cout << "No\n";
                return 0;
            }
            if ((t - dist) % 2 != 0) {
                cout << "No\n";
                return 0;
            }
        }
        else {
            int dt = t - a[i-1][0];
            int dist = abs(x - a[i-1][1]) + abs(y - a[i-1][2]);

            if (dist > dt) {
                cout << "No\n";
                return 0;
            }
            if ((dt - dist) % 2 != 0) {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}



