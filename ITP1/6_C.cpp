#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int n;
    cin >> n;

    vector<vector<vector<int>>> vec(5, vector<vector<int>>(4, vector<int>(11)));
    
    rep(i, n) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        vec[b][f][r] += v;
    }

    rep2(i, 1, 5) {
        rep2(j, 1, 4) {
            rep2(k, 1, 11) {
                cout << " " << vec[i][j][k];
            }
            cout << endl;
        }
        if (i != 4) cout << "####################" << endl;
    }

    return 0;
}