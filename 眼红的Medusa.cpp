#include<iostream>
#include<algorithm>
using namespace std;
int inna[500000], attr[500000];
int check(int k, int l, int r) {
	if (l == r) {
		if (attr[l] == k)return k;
		else return 0;
	}
	else {
		int mid = (l + r) / 2;
		if (k == attr[mid])return k;
		else if (k > attr[mid])return check(k, mid+1, r);
		else return check(k, l, mid);
	}
}
int main() {
	int n, m,red;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> inna[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> attr[i];
	}
	sort(attr + 1, attr + m + 1);
	for (int i = 1; i <= n; i++) {
		if (red = check(inna[i], 1, m))
			cout << red << ' ';
	}
	return 0;
}