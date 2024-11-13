#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	priority_queue<int,vector<int>,greater<int>>pq;
	vector<int>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int op;
		cin >> op;
		switch (op) {
		case 1:
			int x;
			cin >> x;
			pq.push(x);
			break;
		case 2:
			v.push_back(pq.top());
			break;
		case 3:
			pq.pop();
			break;
		}
	}
	for (auto e : v)cout << e << endl;
	return 0;
}