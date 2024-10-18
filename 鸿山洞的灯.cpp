#include<stdio.h>
int p[500000],D[500000];
int main()
{
	int n, dist,cnt=0;
	scanf_s("%d %d", &n, &dist);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &D[i]);
	}
	for (int i = 1; i <= n; i++) {
		int ic = 0, min = 999999;
		for (int j = 1; j <= n; j++) {
			if (min > D[j]) {
				min = D[j];
				ic = j;
			}
		}
		p[i] = min;
		D[ic] = 9999999;
	}
	for (int i = 2; i <= n - 1; i++) {
		if (p[i + 1] - p[i - 1] <= dist) {
			p[i] = p[i - 1];
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}