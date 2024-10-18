#include<stdio.h>
int main()
{
	int n, x,cnt=0;
	scanf_s("%d %d", &n, &x);
	for (int i = 1; i <= n; i++) {
		int a , b = i;
		do {
			a =b%10;
			b /= 10;
			if (a == x)
				cnt++;
		} while (b>0);
	}
	printf("%d", cnt);

	return 0;
}