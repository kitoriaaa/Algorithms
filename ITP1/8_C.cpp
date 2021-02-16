#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


void count(VI &v, char c) {
    c = tolower(c);
    v[c-'a']++;
}

int main() {
    string s;
    VI vec(30);
    
    while(getline(cin, s)) {
        rep(i, s.size()) count(vec, s[i]);
    }
    
    rep(i, 26){
        cout << char(i+'a') << " : " << vec[i] << endl;
    } 
    return 0;
}