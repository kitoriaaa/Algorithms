#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);

    s += s;
    
    if (s.find(p) != string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}