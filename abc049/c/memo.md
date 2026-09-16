# abc049_c
一切歯が立たなかったためcopilotさんに教えてもらった後自分で考えながら解説を読んだ.
後ろから解く発送はそもそもでてこなかった.文字の切断に関しても迷っていたため要復習.

 while (!s.empty()) {
    bool ok = false;
    for (auto &w : words) {
      if (s.size() >= w.size() && s.substr(s.size() - w.size()) == w) {
        s.erase(s.size() - w.size());
        ok = true;
        break;
      }
    }
    if (!ok) {
      cout << "NO\n";
      return 0;
    }
  }

sが空になるまで処理を続ける
ok ループ内でどれかの単語が一致したかどうかを管理
一致したら"ok = true"となり、一致しなければNOの判定に利用する

for (auto &w : words)
wordsの中身を一つずつwに入力する処理
autoは型の自動推論

if (s.size() >= w.size() && s.substr(s.size() - w.size()) == w) {
        s.erase(s.size() - w.size());
        ok = true;
        break;
      }

sの文字数がwの文字数以上かつsの末尾からwの文字数分一致するかで場合分け
substr(開始位置, 取り出す長さ)で指定できる.今回の場合はwの文字数分開始位置を末尾からずらしてある.
wどれかに一致すれば該当末尾を削除の上forの処理を続ける.