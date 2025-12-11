#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    char c = '\0';
    string ans;
    while(cin >> c)
    {
        char lc = tolower(c);
        if(lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u' || lc=='y') 
            continue;
        else {
            ans += ".";
            ans += tolower(c);
        }
    }
    cout << ans << endl;
    return 0;
}