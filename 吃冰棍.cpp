#include<iostream>
using namespace std;
int n;
int judge(int m) {
	int de, mod,ice=m, sum=m;
	do {
	de = sum / 3;
	ice += de;
	 mod = sum % 3;
	 sum = de + mod;
	} while (sum >= 3);
	return ice>=n;
}
int check(int l, int r) {
	if (l == r) return l;
	else {
		int mid;
		mid = (l + r) / 2;
		if (!judge(mid)) {
			return check(mid+1, r);
		}
		else return check(l, mid);
	}
}
int main()
{
	cin >> n;
	cout << check(1, n);
	return 0;
}