#include<stdio.h>
int main() {
	int a[6][11] = { 0 }, minus[6][11],
		km[6] = { 0,1,1,1,1,1};
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 10; j++) {
			scanf_s("%d", &a[i][j]);
			minus[i][j] = a[i][j] - a[i][j - 1];
		}
	}
	for (int i = 1; i <= 20; i++) {
		int min = 9999999,ic=0;
		for (int j = 1; j <= 5; j++) {
			if (minus[j][km[j] + 1] < min && km[j]+1 <= 10) {
				min = minus[j][km[j] + 1];
				ic = j;
			}
		}
		km[ic]++;
	}
	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		sum += a[i][km[i]];
	}
	printf("%d\n", sum);
	for (int i = 1; i <= 5; i++) {
		printf("%d ",km[i]);
	}

	return 0;
}