#include <stdio.h>
int main()
{
	int a[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 }, k[367], n = 0, t, p, q, cnt = 0;
	scanf_s("%d %d", &p, &q);
	for (int i = 1; i <= 12; i++) {
		for (int j = 1; j <= a[i]; j++) {
			t = i * 100 + j;
			k[++n] = (t % 10 * 1000 + t / 10 % 10 * 100 + t / 100 % 10 * 10 + t / 1000 % 10 ) * 10000 + t;
			if (k[n] >= p && k[n] <= q)
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}