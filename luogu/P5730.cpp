#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;

    const string num_patterns[10][5] = {
        {"XXX", "X.X", "X.X", "X.X", "XXX"},
        {"..X", "..X", "..X", "..X", "..X"},
        {"XXX", "..X", "XXX", "X..", "XXX"},
        {"XXX", "..X", "XXX", "..X", "XXX"},
        {"X.X", "X.X", "XXX", "..X", "..X"},
        {"XXX", "X..", "XXX", "..X", "XXX"},
        {"XXX", "X..", "XXX", "X.X", "XXX"},
        {"XXX", "..X", "..X", "..X", "..X"},
        {"XXX", "X.X", "XXX", "X.X", "XXX"},
        {"XXX", "X.X", "XXX", "..X", "XXX"}
    };

    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < s.length(); ++i) {
            int num = s[i] - '0';
            cout << num_patterns[num][j];

            if (i != s.length() - 1) {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}