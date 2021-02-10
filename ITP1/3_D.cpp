#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;
    rep2(i, a, b+1) {
        if (c%i == 0) cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}