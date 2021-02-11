#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    VI x;
    while (true) {
        int n;
        cin >> n;
        if (n==0) break;
        x.emplace_back(n);
    }

    for (size_t i = 0; i < x.size(); i++) {
        cout << "Case " << i+1 << ": " << x[i] << endl;
    }

    return 0;
}