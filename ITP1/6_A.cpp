#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int n;
    cin >> n;
    VI a(n);
    rep(i, n) cin >> a[i];

    for (int i = n-1; i >= 0; i--) {
        if (i) cout << a[i] << " ";
        else cout << a[i] << endl;
    }

    return 0;
}