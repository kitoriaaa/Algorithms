#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) cout << "a == b" << endl;
    else if (a > b) cout << "a > b" << endl;
    else if (a < b) cout << "a < b" << endl;

    return 0;
}