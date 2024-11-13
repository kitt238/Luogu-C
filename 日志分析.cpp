#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	stack<int>box;
	stack<int>max;
	vector<int>num;
	int n, ic, h, maxnum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ic;
		if (!ic) {
			cin >> h;
			box.push(h);
			if (h >= maxnum) {
				maxnum = h;
				max.push(h);
			}
		}
		else if (ic == 1) {
			if (!box.empty()&&!max.empty()) {
				if (box.top() == max.top()) {
					max.pop();
					if (!max.empty())maxnum = max.top();
					else maxnum = 0;
				}
				box.pop();
			}
		}
		else {
			if (!box.empty())num.push_back(max.top());
			else num.push_back(0);
		}
	}
	for (auto e : num) {
		cout << e << endl;
	}
	return 0;
}