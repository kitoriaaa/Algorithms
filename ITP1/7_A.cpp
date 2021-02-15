#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


char grade(int m, int f, int r) {
    if (m == -1 || f == -1) return 'F';
    int score_sum = m + f;
    if (score_sum >= 80) return 'A';
    else if (score_sum >= 65) return 'B';
    else if (score_sum >= 50) return 'C';
    else if (score_sum >= 30) {
        if (r >= 50) return 'C';
        else return 'D';
    } else return 'F';
}


int main() {
    vector<vector<int>> vec;
    
    while (true) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 & r == -1) break;
        vec.emplace_back(vector<int>{m, f, r});
    }

    rep(i, vec.size()) {
        cout << grade(vec[i][0], vec[i][1], vec[i][2]) << endl;
    }

    return 0;
}