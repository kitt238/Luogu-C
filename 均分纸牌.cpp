#include<stdio.h>
int main()
{
	int n,aver=0,a[200],cnt=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
		aver += a[i];
	}
	aver /= n;
	for (int i = 1; i <= n; i++) {
		a[i] -= aver;
	}
	for (int i = 1; i < n; i++) {
		if (!a[i])continue;
		a[i + 1] += a[i];
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}