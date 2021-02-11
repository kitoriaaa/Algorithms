#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    bool xflag = true;
    bool yflag = true;
    if ((x-r < 0) || (x+r > W)) xflag = false;
    if ((y-r < 0) || (y+r > H)) yflag = false;

    if (xflag & yflag) cout << "Yes" << endl;
    else cout << "No" << endl; 

    return 0;
}