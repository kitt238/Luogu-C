#include<iostream>
#include<stack>
#include<vector>
#define LENGTH 2000000
using namespace std;
int h[LENGTH], v[LENGTH], f[LENGTH] = { 0 };

int main() {
	stack<int>s;
	int n,max=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h[i] >> v[i];
		while (!s.empty() && h[i] >= h[s.top()]) {
			f[i] += v[s.top()];
			s.pop();
		}
		if(!s.empty())f[s.top()]+=v[i];
		s.push(i);
	}
	for (int i = 0; i < n; i++) {
		if (max < f[i])max = f[i];
	}
	cout << max;
	return 0;
}