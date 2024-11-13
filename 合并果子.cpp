#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	priority_queue<int, vector<int>, greater<int>>pq;
	vector<int>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pq.push(a);
	}
	int sum = 0;
	while (pq.size() > 1) {
		int l, r;
		l = pq.top();
		pq.pop();
		r = pq.top();
		pq.pop();
		sum += l + r;
		pq.push(l + r);
	}
	cout << sum;
	return 0;
}