# abc146_b
自分でもかなり冗長な分を書いてしまった自覚がある.
copilotさんに添削してもらったコード
s[i]をs回c[i]で上書きする.
'A'を入れないとcがそのままの値で出力してしまうため,文字でアルファベット何番目かを判定してもらわないといけない.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    n %= 26;  // 26 文字でループするので余分を削る

    for (char &c : s) {
        c = 'A' + (c - 'A' + n) % 26;
    }

    cout << s << '\n';
}
