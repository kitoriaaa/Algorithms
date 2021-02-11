#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int a, b;
    cin >> a >> b;
    
    int d = a / b;
    int r = a % b;
    double f = double(a) / b;
    
    cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;
    return 0;
}
