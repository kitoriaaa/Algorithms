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
    
    sort(a.begin(), a.end());
    long long a_sum = 0;
    rep(i, n) a_sum += a[i];

    cout << a[0] << " " << a[a.size()-1] << " " << a_sum << endl;

    return 0;
}