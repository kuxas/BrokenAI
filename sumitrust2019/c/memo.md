# sumitrust2019_c
6重ループをした結果タイムアウト
→自分では解法が思いつかなかったのでcopilotさんに助太刀を頼んだ

dp配列について学んだ
dp[i]にi円が作れるかどうかの真偽値をしまう
1行目
if (!dp[i]) continue;
i円が作れなければ次のi+1円が作れるか判断していく
初期条件では0円は作成可能なのでcontinueせずに次の処理へ移る

2行目以降
コインを1枚ずつ試していき作れるお金を増やす
初期条件を使うことによりどんどん試せる範囲が増える

vector<bool> dp(x + 1);
  dp[0] = true;
  
  rep (i, x) {
    if (!dp[i]) continue;
    for (int c = 100; c <= 105; c++) {
      if (i + c <= x) dp[i + c] = true;
    }
  }
