#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string s;
        cin>>s;
        string res; 
        
        int count = 1; 
        char pre = s[0]; 
        for (int j = 1; j < s.size(); ++j) {
            if (s[j] == pre) {
                count++;
            } else {
                if (count == 1) {
                    res += pre;
                } else {
                    res += to_string(count) + pre;
                }
              
                count = 1;
                pre = s[j];
            }
        }
        if (count == 1) {
            res += pre;
        } else {
            res += to_string(count) + pre;
        }
        cout << res << endl;
    }
    return 0;
}