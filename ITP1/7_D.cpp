#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(l));
    vector<vector<ll>> C(n, vector<ll>(l));

    rep(i, n) {
        rep(j, m) cin >> A[i][j];
    }
    rep(i, m) {
        rep(j, l) cin >> B[i][j];
    }

    rep(i, n) {
        rep(j, l) {
            rep(k, m) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    rep(i, n) {
        rep(j, l) {
            if (j) cout << " " << C[i][j];
            else cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}