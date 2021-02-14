#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int n;
    cin >> n;
    // vector<pair<char, int>> vec(n);
    VI S(14);
    VI H(14);
    VI C(14);
    VI D(14);

    rep(i, n) {
        int a;
        char c;
        cin >> c >> a;
        switch (c) {
            case 'S':
                S[a]++;
                break;
            case 'H':
                H[a]++;
                break;
            case 'C':
                C[a]++;
                break;
            case 'D':
                D[a]++;
                break;
            default:
                break;
        }
    }

    // vector<char, vector<int>> vec;
    vector<pair<char, vector<int>>> vec;
    vec.emplace_back(make_pair('S', S));
    vec.emplace_back(make_pair('H', H));
    vec.emplace_back(make_pair('C', C));
    vec.emplace_back(make_pair('D', D));


    rep(i, vec.size()) {
        rep2(j, 1, 14) {
            if (vec[i].second[j] != 1) cout << vec[i].first << " " << j << endl;
        }
    }


    return 0;
}