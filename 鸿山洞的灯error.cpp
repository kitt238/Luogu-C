#include<stdio.h>
int D[500000],light[500000];
int mode[500000] = { 0 };
int main()
{
	int n, dist,cnt=0;
	int length;
	scanf_s("%d %d", &n, &dist);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &D[i]);
	}
	for (int i = 1; i <= n; i++) {
		int ic=0,min = 999999;
		for (int j = 1; j <= n; j++) {
			if (min > D[j]) {
				 min= D[j];
				 ic = j;
			}
		}
		light[i] = min;
		D[ic] = 9999999;
	}
	for (int i = 1; i < n; i++) {
		if (mode[i])continue;
		length = light[i] + dist;
		for (int j = i + 1;; j++) {
			if (light[j] > length && j == i + 1)
				break;
			if (light[j] > length && j != i + 1 && j != n) {
				for (int k = i + 1; k <= j - 2; k++) {
					mode[k] = 1;
					cnt++;
				}break;
			}
			else if (j == n) {
				for (int k = i + 1; k <= j - 1; k++) {
					mode[k] = 1;
					cnt++;
				}break;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}