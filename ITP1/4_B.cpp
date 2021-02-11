#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    double r;
    cin >> r;

    double area = M_PI*r*r;
    double circle = 2*M_PI*r;

    cout << fixed << setprecision(5) << area << " " << circle << endl;

    return 0;
}