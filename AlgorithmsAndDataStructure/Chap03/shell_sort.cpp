// ALDS1_2_D: Shell Sort

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

long long cnt;
VI G;

void insertion_sort(int A[], int n, int g) {
    rep2(i, g, n) {
        int v = A[i];
        int j = i-g;
        while (j >= 0 && A[j] > v) {
            A[j+g] = A[j];
            j = j-g;
            cnt++;
        }
        A[j+g] = v;
    }
}


int shell_sort(int A[], int n) {
    cnt = 0;
    for (int h = 1; ;) {
        if (h > n) break;
        G.emplace_back(h);
        h = 3*h + 1;
    }
    int m = G.size();
    for (int i = m-1; i >= 0; i--) {
        insertion_sort(A, n, G[i]);
    }

    return m;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    int m = shell_sort(A, N);

    cout << m << endl;
    for (int i = G.size()-1; i >= 0; i--) {
        cout << G[i];
        if (i) cout << " ";
    }
    cout << endl;
    cout << cnt << endl;
    rep(i, N) cout << A[i] << endl;

    return 0;
}