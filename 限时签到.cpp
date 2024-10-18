#include<stdio.h>
#define int long long
int re() {
	int x = 0, f = 1;
	char ch;
	ch = getchar();
	while (ch < '0' || ch>'9') {
		if (ch == '-')f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
signed main()
{
	long long n, t, f, x, a, cnt = 0;
	n = re(), t = re(), f = re();
	for (long long i = 1; i <= n; i++) {
		x = re(), a = re();
		if (a <= x - f + t)cnt++;
	}
	printf("%lld", cnt);
	return 0;
}