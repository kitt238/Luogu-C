#include<stdio.h>
int a[1000][1000],
b[1000];
int main()
{
	int n, m, k;
	for (int i = 0; i < 1000; i++) {
		b[i] = 0;
	}
	scanf_s("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (int num = 1; num <= k; num++) {
		for (int j = 0; j < m; j++) {
			for (int i = 0; i < n; i++) {
				if (a[i][j] == num) {
					b[num]++;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= k; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}