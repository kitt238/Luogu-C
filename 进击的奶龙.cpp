#include<iostream>
#include<algorithm>
using namespace std;
int x[600000],n,c;
int judge(int k) {
	int l = 1,num=1;
	for (int i = 2; i <= n; i++) {
		if (x[i] - x[l] >= k) {
			l = i;
			num++;
		}
	}
	return num >= c;
}
int check(int l, int r) {
	if (l == r-1) return l;
	else {
		int mid;
		mid = (l + r) / 2;
		if (judge(mid)) {
			return check(mid, r);
		}
		else return check(l, mid);
	}
}
int main()
{
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	sort(x + 1, x + n + 1);
	int aver = (x[n] - x[1]) / (c - 1);
	if (judge(aver))cout << aver;
	else cout << check(1, aver);
	return 0;
}