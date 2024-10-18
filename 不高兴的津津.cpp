#include<stdio.h>
int main()
{
	int day=0,max=0;
	int a[7], b[7], c[7] = { 0 };
	for (int i=0; i < 7; i++)
	{
		scanf_s("%d %d", &a[i], &b[i]);
		if (a[i] + b[i] > 8)
			c[i] = a[i] + b[i];
	}
	for (int i=0; i < 7; i++)
	{
		if (c[i] > max)
		{
			max = c[i];
			day = i + 1;
		}
	}
	printf("%d", day);
	return 0;
}