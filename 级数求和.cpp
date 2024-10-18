#include<stdio.h>
int main()
{
	float s = 0;
	int i,cnt;
	scanf_s("%d", &i);
	for (cnt = 1; s <= i; cnt++)
	{
		s = s + 1.0 / cnt;
	}
	printf("%d",cnt-1);

	return 0;
}