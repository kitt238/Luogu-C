#include<iostream>
#include<stack>
using namespace std;

int a[4000000];

int find(int x, stack<int>s, stack<int>id) {
    while (!s.empty()) {
        if (x >= s.top()) {
            s.pop();
            id.pop();
        }
        else break;
    }
    if (id.empty())return 0;
    return id.top();
}

void instack(int x,int i,stack<int>&s,stack<int>&id) {
    if (s.empty()) {
        s.push(x);
        id.push(i);
    }
    else if (x <=s.top()) {
        s.push(x);
        id.push(i);
    }
    else {
        int y = s.top();
        int t = id.top();
        s.pop();
        id.pop();
        instack(x,i,s,id);
        s.push(y);
        id.push(t);
    }
}

int main(){
    stack<int>s;
    stack<int>id;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
        instack(a[i], i,s,id);
	}
    for (int i = 1; i <= n; i++) {
        cout<<find(a[i],s,id)<<' ';
    }
	return 0;
}