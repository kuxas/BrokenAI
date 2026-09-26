# Point

abc085_c
関数を作成する場合は戻り値がどのような値になるか考えてから宣言を行うこと.

abc156_d
ラムダ式、modintについて解説.

sumitrust2019_c
dp配列について解説.
コインで作れる金額の問題等で活躍する.

大きいデータは const &
mod計算はmodintに任せる
ラムダ式はその場で関数を作成する
&をつけるとコピーしない別名になる
→コピーではないため、元の値を書き換える可能性があるが、高速で処理できる
constは元の値を書き換えることはないため、安全に高速で処理することができる

setting.jsonを編集
{
    "editor.quickSuggestions": {
        "other": "off",                     //offWhenInlineCompletionsから変更
        "comments": "off",
        "strings": "off"
    },
    "editor.parameterHints.enabled": false  //追加
}

vscode右下のcopilotよりInline Suggestionsを無効化
→自分でコードを一通り書けるようになった後有効化するのがベスト？