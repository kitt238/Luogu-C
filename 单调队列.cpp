#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
	int n, k;
	deque<int>max,min;
	vector<int>a,ansmax,ansmin;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int n;
		cin >> n;
		a.push_back(n);
	}
	for (int i = 0; i < n; i++) {
		while (!max.empty()&&a[i]>=a[max.back()]) {
			max.pop_back();
		}
		max.push_back(i);
		while (!min.empty() && a[i] <= a[min.back()]) {
			min.pop_back();
		}
		min.push_back(i);
		if (i - max.front() + 1 > k)max.pop_front();
		if (i - min.front() + 1 > k)min.pop_front();
		if (i >= k - 1) {
			ansmax.push_back(a[max.front()]);
			ansmin.push_back(a[min.front()]);
		}
	}
	for (auto e : ansmin)cout << e << ' ';
	cout << endl;
	for (auto e : ansmax)cout << e << ' ';
	return 0;
}