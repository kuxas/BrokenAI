# abc085_b
abc088と似たような感じで書けたのであまり苦労することはなかった.
ただコンパイルしたときに警告があった.

warning: comparison of integer expressions of different signedness:
‘int’ and ‘std::vector<int>::size_type’ {aka ‘long unsigned int’}

for (int i = 1; i < d.size(); i++)

sizeを利用すると符号なしの数が出力される？ため符号なしと符号アリの比較になり危険とのこと
※copilot様より
なんとなくは理解.

→今回の対処
for (int i = 1; i < (int)d.size(); i++)
sizeをintに変更した.
sizeがintの範囲を超えると危険(intの範囲とは....)

abc088では使えた手法がなぜ使えなかったのか
→0-indexだと負の値をとりえないから.
今回のように1-indexを使う場合は対処する必要あり

int count_smaller(const vector<int>& d) {
    int count = 1;
    for (int i = 0; i + 1 < d.size(); i++) {
        if (d[i] > d[i + 1]) {
            count++;
        }
    }
    return count;
}

0-indexで記述した場合は上記のようになる.
0-indexを利用する場合,[i + 1]の範囲外アクセスを防ぐために条件式をi + 1 < d.size()に変更する必要がある.
個人的には見にくい＋気を付けるべき点が増えるため、0-indexを選定してよかったと思う.

反省：
int count_smaller(vector<int>& d) 
動作を速くするために作ったつもりがconstが抜けていた

正しくは
int count_smaller(const vector<int>& d)
