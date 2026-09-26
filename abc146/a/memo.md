# abc146_a

自分の書き方だと長くて読みづらいと感じた.
→配列に代入してそこから曜日を判定したほうが見やすい.
vector<string> day = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

    for (int i = 0; i < 7; i++) {
        if (s == day[i]) {
            cout << 7 - i << '\n';
            return 0;
        }
    }