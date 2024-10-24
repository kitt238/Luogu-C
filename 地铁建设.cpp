#include<iostream>
#define int long long
using namespace std;
long long n, p;
long long a[104], b[104], z[104];
int engine(int x, int z, int a, int b) {
	int p;
	if (x <= z)p = a * x;
	else p = a * z + b * (x - z);
	return p;
}
int check(int l, int r) {
	if (l == r)return l;
	else {
		int sum = 0, mid = (l + r) / 2;
		for (int i = 1; i <= n; i++) {
			sum += engine(mid, z[i], a[i], b[i]);
		}
		if (sum >= p)return check(l, mid);
		else return check(mid + 1, r);
	}
}
signed main()
{
	cin >> n >> p;
	for (int i = 1; i <= n; i++) {
		cin >> z[i] >> a[i] >> b[i];
	}
	cout << check(1, p);

	return 0;
}