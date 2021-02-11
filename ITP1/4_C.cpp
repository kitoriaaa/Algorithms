#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;




void solve(int a, int b, char c) {
    switch (c)
        {
        case '+':
            /* code */
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            break;
        }
}

int main() {
    vector<tuple<int, int, char>> vec;
    
    while (true) {
        char c;
        int a, b;
        cin >> a >> c >> b;
        if (c == '?') break;
        vec.emplace_back(make_tuple(a, b, c));
    }

    rep(i, vec.size()) {
        solve(get<0>(vec[i]), get<1>(vec[i]), get<2>(vec[i]));
    }
    
    return 0;
}