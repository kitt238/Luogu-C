#include<iostream>
#include<stack>
using namespace std;

typedef struct {
    int ic;
    int num;
}element;

stack<element>s;

void instack(element x) {
    if (s.empty()) {
        s.push(x);
    }
    else if (x.num <= s.top().num) {
        s.push(x);
    }
    else {
        element y = s.top();
        s.pop();
        instack(x);
        s.push(y);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        s.ic = i;
        s.num = k;
        instack(s);
    }


    return 0;
}