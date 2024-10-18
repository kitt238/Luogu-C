#include<stdio.h>
int main()
{
	int l, r, cnt = 0;
	scanf_s("%d %d", &l, &r);
	for (int i = l; i <= r; i++) {
		int a, b = i;
		do {
			a = b % 10;
			b /= 10;
			if (a == 2)
				cnt++;
		} while (b > 0);
	}
	printf("%d", cnt);

	return 0;
}