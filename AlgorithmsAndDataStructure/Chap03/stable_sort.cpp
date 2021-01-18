// ALDS1_2_C: Stable Sort

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define rep3(n)          for (int i = 0; i < (int)(n); i++)
typedef vector<int> VI;

class Card
{
private:
    /* data */
    int value;
    char suit;
    int input_times;
public:
    Card() : value(0), suit(0) {}
    Card(int i, char c);

    void set_card(char c, int i);
    void set_value(int n);
    void set_suit(char c);
    void set_input_times(int n);

    int get_value();
    char get_suit();
    int get_input_times();
};

Card::Card(int i, char c) : value(i), suit(c) {}

void Card::set_card(char c, int i) {
    value = i;
    suit = c;
}
void Card::set_value(int n) {
    value = n;
}
void Card::set_suit(char c) {
    suit = c;
}
void Card::set_input_times(int n) {
    input_times = n;
}
int Card::get_value() { return this->value; }
char Card::get_suit() { return this->suit; }
int Card::get_input_times() { return this->input_times; }

// Bubble Sort
void bubble_sort(Card C[], int N) {
    rep(i, N) {
        for (int j = N-1; j >= i+1; j--) {
            if (C[j].get_value() < C[j-1].get_value()) swap(C[j], C[j-1]);
        }
    }
}

// Selection Sort
void selection_sort(Card C[], int N) {
    rep(i, N) {
        int minj = i;
        rep2(j, i, N) {
            if (C[j].get_value() < C[minj].get_value()) minj = j;
        }
        swap(C[i], C[minj]);
    }
}

// check stable
bool is_stable(Card C[], int N) {
    rep(i, N) {
        rep2(j, i+1, N) {
            if (C[i].get_value() == C[j].get_value()) {
                if (C[i].get_input_times() > C[j].get_input_times()) return false;
            }
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    Card C[N];
    rep(i, N) {
        int n;
        char c;
        cin >> c >> n;
        C[i].set_suit(c);
        C[i].set_value(n);
        C[i].set_input_times(i);
    }
    
    Card C2[N];
    rep(i, N) C2[i] = C[i];

    // bubble sort
    bubble_sort(C, N);
    rep(i, N) {
        if (i) cout << " ";
        cout << C[i].get_suit() << C[i].get_value();
    }
    cout << endl;
    if (is_stable(C, N)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    // selection sort
    selection_sort(C2, N);
    rep(i, N) {
        if (i) cout << " ";
        cout << C2[i].get_suit() << C2[i].get_value();
    }
    cout << endl;
    if (is_stable(C2, N)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;


    return 0;
}

