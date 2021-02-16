#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    vector<string> str;
    while (true) {
        string s;
        cin >> s;
        
        str.emplace_back(s);
    }

    // rep(i, s.size()) {
    //     if (isupper(s[i])) s[i] = tolower(s[i]);
    //     else toupper(s[i]);
    // }

    rep(i, str.size()) {
        string s = str[i];
        rep(j, s.size()) {
            if (isupper(s[j])) s[j] = tolower(s[j]);
            else toupper(s[j]);
        }
        
    }

    rep(i, str.size()) cout << str[i] << endl;

    return 0;
}