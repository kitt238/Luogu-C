#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int sch[5000000], stu[5000000];
int check(int k, int l, int r) {
	if (l == r)return abs(sch[l] - k);
	else if (l == r - 1) {
		if (abs(sch[l] - k) < abs(sch[r] - k))return abs(sch[l] - k);
		else return abs(sch[r] - k);
	}
	else {
		int mid = (l + r) / 2;
		if (k == sch[mid])return 0;
		else if (k > sch[mid])return check(k, mid, r);
		else return check(k, l, mid);
	}
}
int main() {
	int n, m;
	long long angry=0;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> sch[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> stu[i];
	}
	sort(sch+1, sch + m+1);
	for (int i = 1; i <= n; i++) {
		angry += check(stu[i],1,m);
	}
	cout << angry << endl;

	return 0;
}