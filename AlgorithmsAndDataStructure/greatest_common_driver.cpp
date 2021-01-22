#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    while (true) {
        int high_v = max(x, y);
        int low_v = min(x, y);
        int md = high_v % low_v;
        if (md == 0) return low_v;
        else {
            x = md;
            y = low_v;
        }
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}