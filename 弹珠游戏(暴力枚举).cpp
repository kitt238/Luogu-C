#include<stdio.h>
int a[1050][1050], sumX[1050], sumY[1050];
int main()
{
	int n, cnt,sum,max=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(!a[i][j]){
				sum = 0;
				for (int k = 1; k <= n; k++) {
					sum += a[k][j];
				}
				for (int k = 1; k <= n; k++) {
					sum += a[i][k];
				}
				if (max < sum)max = sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}