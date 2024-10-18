#include<stdio.h>
int a[10005];
int main()
{
	int num;
	
	int L = 0, R = 0, cnt = 0;
	scanf_s("%d", &num);
	//a = (int*)malloc(num * sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 1; i < num - 1; i++) {
		if (a[i] < a[i - 1]) {
			L = 1;
		}
		if (a[i] < a[i + 1]&&L==1) {
			R = 1;
		}
		if (L && R) {
			cnt++;
			L = R = 0;
		}
	}
	printf("%d", cnt);

	return 0;
}