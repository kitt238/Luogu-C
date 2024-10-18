#include<stdio.h>
int main()
{
	int n, m,sum=0,a[3060],min=99999;
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = m; i <= n; i++) {
		sum = 0;
		for (int j = i-m+1; j <= i; j++) {
			sum += a[j];
		}
		if (min > sum) {
			min = sum;
		}
	}
	printf("%d", min);

	return 0;
}