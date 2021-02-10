#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

int main() {
    VI vec(3);
    rep(i, 3) cin >> vec[i];
    sort(vec.begin(), vec.end());    
    
    rep(i, 3) {
        if (i) cout << " " << vec[i];
        else cout << vec[i];
    }
    cout << endl;
    return 0;
}