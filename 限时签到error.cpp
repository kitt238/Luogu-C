#include<stdio.h>
int main()
{
	char ch;
	long long i,n, t, f,x,a,cnt=0;
	scanf_s("%lld %lld %lld\n", &n, &t, &f);
	for (i = 1; i <= n; i++) {
		a = 0, x = 0;
		while (1) {
			ch = getchar();
			if (ch > '9' || ch < '0')break;
			x = x * 10 + (ch-'0');
		}
		while (1) {
			ch = getchar();
			if (ch > '9' || ch < '0')break;
			a = a * 10 + (ch - '0');
		}
		if (a <= x - f + t)cnt++;
	}
	printf("%lld", cnt);
	return 0;
}
