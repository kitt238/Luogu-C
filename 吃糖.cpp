#include<stdio.h>
long long a[500000],mid[500000];
int main()
{
	long long n,x,sum = 0;
	scanf_s("%lld %lld", &n, &x);
	scanf_s("%lld", &a[1]);
	if (a[1] > x) {
		sum += a[1] - x;
		a[1] = x;
	}
	for (int i = 2; i <= n; i++) {
		scanf_s("%lld", &a[i]);
		if (a[i] + a[i - 1] > x) {
			sum += a[i] + a[i - 1] - x;
			a[i] = x - a[i - 1];
		}
	}
	printf("%lld", sum);
	return 0;
}