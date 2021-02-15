#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> vec(r+1, vector<int>(c+1));
    
    int row_sum = 0;
    rep(i, r) {
        rep(j, c) {
            int num;
            cin >> num;
            vec[i][j] = num;
            vec[i][c] += num;
            vec[r][j] += num;
        }
        vec[r][c] += vec[i][c];
    }

    rep(i, r+1) {
        rep(j, c+1) {
            if (j) cout << " " << vec[i][j];
            else cout << vec[i][j];
        }
        cout << endl;
    }


    return 0;
}