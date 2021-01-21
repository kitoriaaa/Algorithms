// ALDS_1_3_B: Queue
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


const int MAX = 1006;

struct process
{
    char name[100];
    int time;
};


class Queue
{
private:
    /* data */
    process S[100006];
    int top = 0;
    int tail = 1;
public:
    Queue(/* args */);
    void enqueue(process x);
    process dequeue();
    bool is_full();
    bool is_empty();
};

Queue::Queue(/* args */)
{
}

void Queue::enqueue(process x) {
    if (this->is_full()) throw out_of_range("over flow");
    S[tail] =  x;
    tail++;
    if (tail == 100006) tail = 0;
}

process Queue::dequeue() {
    if (this->is_empty()) throw out_of_range("undef flow");
    top++;
    if (top == 100006) top = 0;
    return S[top];
}

bool Queue::is_full() {
    if (top == tail) return true;
    else return false;
}

bool Queue::is_empty() {
    if (top == tail) return true;
    else return false;
}

int main() {
    int n, q;
    cin >> n >> q;

    Queue Q;
    process p;

    for (int i = 1; i <= n; i++) {
        scanf("%s", p.name);
        scanf("%d", &p.time);
        Q.enqueue(p);
    }

    process ans[n];
    int cnt = 0;
    int ind = 0;
    while (true) {
        try {
            p = Q.dequeue();
        } catch (out_of_range e) {
            break;
            cout << e.what() << endl;
        }
        if (p.time <= q){
            cnt += p.time;
            p.time = cnt;
            ans[ind] = p;
            ind++;
        } else {
            cnt += q;
            p.time = p.time-q;
            Q.enqueue(p);
        }
    }

    rep(i, n) {
        p = ans[i];
        cout << p.name << " " << p.time << endl;
    }

    return 0;
}