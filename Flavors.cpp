#include<stdio.h>
int F[400000], S[400000];
int main()
{
	int n,k,max0=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d %d", &F[i], &S[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (max0 < S[i]) {
			max0 = S[i];
			k = i;
		}
	}
	int max1=0,max2=0;
	for (int i = 1; i <= n; i++) {
		if (i == k)continue;
		if (F[i] == F[k]) {
			if (max1 < S[i])max1 = S[i];
		}
		else
		{
			if (max2 < S[i])max2 = S[i];
		}
	}
	int max01 = max0 + max1 / 2;
	int max02 = max0 + max2;
	if (max01 > max02)printf("%d", max01);
	else printf("%d", max02);
	return 0;
}