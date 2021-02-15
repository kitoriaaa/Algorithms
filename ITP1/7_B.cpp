#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int solve(int n, int x) {
    int cnt = 0;
    rep2(i, 1, n+1) {
        rep2(j, i+1, n+1) {
            rep2(k, j+1, n+1) {
                if (i+j+k == x) cnt++;
            }
        }
    }
    return cnt;
}


int main() {
    vector<pair<int, int>> vec;
    while (true){
        int n, x;
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        vec.emplace_back(make_pair(n, x));
    }
    
    rep(i, vec.size()) cout << solve(vec[i].first, vec[i].second) << endl;

    return 0;
}