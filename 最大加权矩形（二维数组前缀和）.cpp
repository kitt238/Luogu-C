#include<stdio.h>
int pre[150][150] = { {0,0},{0} };
int sum(int xa,int ya,int xb,int yb) {
	int sum=0;
	sum = pre[xb][yb] - pre[xb][ya - 1] -
		pre[xa - 1][yb] + pre[xa - 1][ya - 1];
	return sum;
}
int main()
{
	int n,a,max=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf_s("%d", &a);
			pre[i][j] = pre[i - 1][j] +
			pre[i][j - 1] -pre[i - 1][j - 1] + a;
		}
	}
	for (int xa = 1; xa <=n; xa++) {
		for (int ya = 1; ya <= n; ya++) {
			for (int xb = xa; xb <= n; xb++) {
				for (int yb = ya; yb <= n; yb++) {
					if (max < sum(xa, ya, xb, yb)) {
						max= sum(xa, ya, xb, yb);
					}
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}