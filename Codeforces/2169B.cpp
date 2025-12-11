#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        bool infinite = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != '<' && s[i + 1] != '>') {
                infinite = true;
                break;
            }
        }
        
        if (infinite) {
            cout << -1 << endl;
        } else {
            int left_count = 0, right_count = 0;
            for (char c : s) {
                if (c == '<') left_count++;
                else if (c == '>') right_count++;
            }
            cout << n - min(left_count, right_count) << endl;
        }
    }
    
    return 0;
}