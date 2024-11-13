#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	vector<int>rac,ans;
	deque<int>board;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int n;
		cin >> n;
		rac.push_back(n);
	}
	for (int i = 0; i < n; i++) {
		while (!board.empty() && rac[i] > rac[board.back()]) {
			board.pop_back();
		}
		board.push_back(i);
		if (i - board.front() + 1 > k)board.pop_front();
		if (i >= k - 1)ans.push_back(rac[board.front()]);
	}
	for (auto e : ans) cout << e << endl;
	return 0;
}