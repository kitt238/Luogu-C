#include<stdio.h>
long long modp[50055];
int main()
{
	int n, first[7], last[7], length[7];
	long long max = 0, sum = 0,a;
	for (int i = 0; i < 7; i++) {
		first[i] = last[i] = length[i] = 0;
	}
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%lld", &a);
		sum += a;
		modp[i] = sum % 7;
	}
	for (int i = n; i >= 1; i--) {
		first[modp[i]] = i;
	}
	first[0] = 0;
	for (int i = 1; i <= n; i++) {
		last[modp[i]] = i;
	}
	for (int i = 0; i <= 6; i++) {
		length[i] = last[i] - first[i];
	}
	for (int i = 0; i <= 6; i++) {
		if (max < length[i]) {
			max = length[i];
		}
	}
	printf("%lld", max);
	return 0;
}