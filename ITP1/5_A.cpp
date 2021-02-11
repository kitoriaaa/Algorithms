#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


void print_rect(int h, int w) {
    string s = string(w, '#');
    rep(i, h) cout << s << endl;
    cout << endl;
}

int main() {
    vector<pair<int, int>> vec;
    while (true) {
        int h, w;
        cin >> h >> w;
        if (h == 0 && w == 0) break;
        vec.emplace_back(make_pair(h, w));
    }

    rep(i, vec.size()) print_rect(vec[i].first, vec[i].second);

    return 0;
}