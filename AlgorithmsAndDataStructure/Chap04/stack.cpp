// ALDS1_3_A: Stack

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

int MAX = 100;

class Stack
{
private:
    /* data */
    int S[100];
    int top = -1;
public:
    Stack(/* args */);
    int pop_back();
    void push_back(int x);
    bool is_empty();
    bool is_full();
};

Stack::Stack(/* args */)
{
}
int Stack::pop_back() { 
    if (this->is_empty()) throw out_of_range("stack_underflow"); 
    top--;
    return S[top+1];
}
void Stack::push_back(int x) {
    if (this->is_full()) throw out_of_range("stack_overflow");
    top++;
    S[top] = x;
}
bool Stack::is_empty() {
    if (top <= -1) return true;
    else return false;
}
bool Stack::is_full() {
    if (top >= MAX-1) return true;
    else return false;
}



int main() {
    Stack stack;
    char s[100];
    while ( scanf("%s", s) != EOF ) {
        try {
            char c = s[0];
            int a, b;
            switch (c)
            {
            case '+':
                a = stack.pop_back();
                b = stack.pop_back();
                stack.push_back(a+b);
                break;
            case '-':
                a = stack.pop_back();
                b = stack.pop_back();
                stack.push_back(b-a);
                break;
            case '*':
                a = stack.pop_back();
                b = stack.pop_back();
                stack.push_back(a*b);
                break;
            case ' ':
                break;
            default:
                stack.push_back(atoi(s));
                break;
            }
        } catch(out_of_range e) {
            cout << e.what() << endl;
        }
    }
    cout << stack.pop_back() << endl;

    return 0;
}