#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

int main() {
    int S;
    cin >> S;

    int h = S / 3600;
    int m = (S % 3600) / 60;
    S = S % 60;

    cout << h << ":" << m << ":" << S <<endl;
 
    return 0;
}