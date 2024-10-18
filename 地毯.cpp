#include<stdio.h>
int a[1010][1010];
int main()
{
	int n, m,
		x1, y1,
		x2, y2;
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = 0;
		}
	}
	for (int k = 1; k <= m; k++) {
		int kx = 0,ky=0;
		scanf_s("%d %d %d %d",
			&x1, &y1, &x2, &y2);
		if (x1 > x2) {
			kx = x1;
			x1 = x2;
			x2 = kx;
		}
		if (y1 > y2) {
			ky = y1;
			y1 = y2;
			y2 = ky;
		}
		for (int i = x1; i <= x2; i++) {
			for (int j = y1; j <= y2; j++) {
				a[i][j]++;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}