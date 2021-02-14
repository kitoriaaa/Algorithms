#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    VI b(m);
    
    rep(i, n) {
        rep(j, m) {
            cin >> A[i][j];
        }
    }
    rep(i, m) cin >> b[i];


    rep(i, n) {
        int ci = 0;
        rep(j, m) { 
            ci += A[i][j] * b[j];
        }
        cout << ci << endl;
    }

    return 0;
}