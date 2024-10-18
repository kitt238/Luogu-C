#include<stdio.h>
int a[101][101], b[101][101],x0[10001],y0[10001];
int main()
{
	int n, m, x, y;
	scanf_s("%d %d %d %d", &n, &m, &x, &y);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			a[i][j] = b[i][j] = 0;
			
		}
	}
	for (int i = 0; i < x; i++) {
		int x1, y1, x2, y2;
		scanf_s("%d %d %d %d", 
			&x1,&y1,&x2,&y2);
		if (x1 > x2) {
			int a = x1;
			x1 = x2;
			x2 = a;
		}
		if (y1 > y2) {
			int a = y1;
			y1 = y2;
			y2 = a;
		}
		for (int g = x1; g <= x2; g++) {
			for (int h = y1; h <= y2; h++) {
				a[g][h]++;
				b[g][h] = i + 1;
			}
		}
	}
	for (int i = 0; i < y; i++) {
		scanf_s("%d %d", &x0[i], &y0[i]);
	}
	for (int i = 0; i < y; i++) {
		if (a[x0[i]][y0[i]] == 0) {
			printf("N\n");
		}
		else {
			printf("Y %d %d\n", a[x0[i]][y0[i]], b[x0[i]][y0[i]]);
		}
	}
	return 0;
}