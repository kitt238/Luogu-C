#include<stdio.h>
int main()
{
	int l, m, a, b, cnt = 0;
	scanf_s("%d %d", &l, &m);
	int z[10001];
	for (int i = 0; i < 10001; i++)
		z[i] = 1;
	for (int i = 0; i < m; i++) {
		scanf_s("%d %d", &a, &b);
		for (int j = a; j <= b; j++) {
			z[j] = 0;
		}
	}
	for (int i = 0; i <= l; i++) {
		if (z[i] == 1)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}