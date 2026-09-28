# abc088_c
自力で書けるところまで書いてcopilotさんに添削してもらった.
なんとなく解放は思い浮かべられるようになったが,まだ実装力が足りないと痛感.
一応自分で書いたコードは置いておく.
この問題もどこかでやり直したい.

  vector<int> a(3);
  vector<int> b(3);
  rep(k, 3) {
    rep(l, 3) {
      rep(i, 100) {
        rep(j, 100) {
          if (i + j != c[k][l]) continue;
          else {
            a[k] = i;
            b[l] = j;
          }
        }
      }
      if (c[k][l] != a[k] + b[l]) {
      cout << "No\n";
      return 0;
      }
    }
  }
  cout << "Yes\n";
  