#include<stdio.h>
int a[1050][1050],sumX[1050],sumY[1050];
int main()
{
	int n,zero,cnt;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (!a[i][j]) {
				zero++;
			}
		}
	}
	if (!zero)printf("Bad Game!");
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				sumX[i] += a[i][j];
			}
		}
		for (int j = 1; j <= n; j++) {
			for (int i = 1; i <= n; i++) {
				sumY[i] += a[i][j];
			}
		}

	}
	return 0;
}