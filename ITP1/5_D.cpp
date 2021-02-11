#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

void solve(int n) {
    rep2(i, 1, n+1) {
        int x = i;
        if (x%3 == 0) {
            cout << " " << i;
            continue;
        }
        
        while (x) {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    cout << endl;
}

int main() {
    int n; 
    cin >> n;
    solve(n);

    return 0;
}