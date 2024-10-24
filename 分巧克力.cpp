#include<iostream>
using namespace std;
int n,k, ans=-1,maxh = 0;
int h[500000], w[500000];
int judge(int h, int w, int b) {
	return (h / b) * (w / b);
}
int check(int l, int r) {
	int mid = (l + r) / 2, num = 0;
	for (int i = 1; i <= n; i++) {
		num += judge(h[i], w[i], mid);
	}
	if (num >= k)ans = mid;
	if (l != r) {
		if (num >= k)return check(mid + 1, r);
		else return check(l, mid - 1);
	}
	else return ans;
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> h[i] >> w[i];
		if (maxh < h[i])maxh = h[i];
	}
	cout << check(1, maxh);
	return 0;
}