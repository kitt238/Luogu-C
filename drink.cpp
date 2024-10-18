#include<stdio.h>
int a[500000];
int main()
{
	int n,k, first=0,last=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = n; i >= 1; i--) {
		if (a[i]) first = i;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i]) last = i;
	}if (!first) {
		k = 0;
	}
	else {
		k = last - first + 1;
	}
	printf("%d", k);
	return 0;
}