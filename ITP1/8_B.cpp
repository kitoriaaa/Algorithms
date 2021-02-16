#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int solve(string s) {
    int cnt = 0;
    rep(i, s.length()) {
        cnt += s[i]-'0';
    }
    return cnt;
}

int main() {
    vector<string> vec;
    while (true) {
        string s;
        istringstream ss1;
        int p1;
        cin >> s;
        ss1 = istringstream(s);
        ss1 >> p1;
        if (p1 == 0) break;
        vec.emplace_back(s);
    }

    rep(i, vec.size()) {
        cout << solve(vec[i]) << endl;
    }

    return 0;
}
