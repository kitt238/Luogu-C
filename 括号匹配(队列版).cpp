#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

int main() {
	queue<char>st;
	char c;
	int l=0, r=0, ic=0;
	c = getchar();
	while (c!='@') {
		st.push(c);
		c = getchar();
	}
	while (!st.empty()) {
		if (st.front() == '(') {
			l++;
			ic++;
		}
		if (st.front() == ')') {
			r++;
			if (ic)ic--;
		}
		st.pop();
	}
	if (l == r && !ic)cout << "YES";
	else cout << "NO";
	return 0;
}