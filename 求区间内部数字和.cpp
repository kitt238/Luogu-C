#include<stdio.h>
int a[100005], l[100005], r[100005],
sum[100005];
int main()
{
	int n,m;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d %d", &l[i], &r[i]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = l[i]; j <= r[i]; j++) {
			for (int k = 0; k < n; k++) {
				if (a[k] == j) {
					sum[i] += j;
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		printf("%d\n", sum[i]);
	}
	return 0;
}