#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


void print_frame(int h, int w) {
    string s_1 = string(w, '#');
    string s_2 = "#" + string(w-2, '.') + "#";
    cout << s_1 << endl;
    rep(i, h-2) cout << s_2 << endl;
    cout << s_1 << endl << endl;
}

int main() {
    vector<pair<int, int>> vec;
    while (true) {
        int h, w;
        cin >> h >> w;
        if (h == 0 && w == 0) break;
        vec.emplace_back(make_pair(h, w));
    }

    rep(i, vec.size()) print_frame(vec[i].first, vec[i].second);

    return 0;
}