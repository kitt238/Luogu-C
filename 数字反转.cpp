#include<stdio.h>
int main()
{
	int n,a=0,b=0;
	scanf_s("%d", &n);
	while (n != 0) {
		a = a*10+n % 10;
		n /= 10;
	}
	printf("%d", a);

	return 0;
}