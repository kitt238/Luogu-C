#include<stdio.h>
int main()
{
	int num,money,i=0;
	int a[3], b[3], c[3];
	scanf_s("%d", &num);
	for (i = 0; i < 3; i++) {
		scanf_s("%d %d", &a[i],& b[i]);
		if (num % a[i]==0)
			c[i] = num / a[i] * b[i];
		else
			c[i] = (num / a[i] + 1) * b[i];
	}
	money = c[0];

	for (i = 1; i < 3; i++)
	{
		if (money > c[i]) {
			money = c[i];
		}
	}
	printf("%d", money);
	return 0;
}