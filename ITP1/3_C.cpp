#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    vector<pair<int, int>> vec;

    while (true) {
        int x, y;
        cin >> x >> y;
        if (x==0 && y==0) break;
        pair<int,int> p = make_pair(x, y);
        vec.emplace_back(p);
    }

    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i].first <= vec[i].second) cout << vec[i].first << " " << vec[i].second << endl;
        else cout << vec[i].second << " " << vec[i].first << endl;
    }
    return 0;
}