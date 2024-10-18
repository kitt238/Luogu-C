#include<stdio.h>
int main()
{
	int arr[10001], n,a,cnt=0;
	scanf_s("%d", &n);
	for (int i = 0; i < 10001; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a);
		arr[a] = 1;
	}
	for (int i = 0; i < 10001; i++) {
		if (arr[i] == 0)
			m:continue;
		for (int j =0; j < i; j++) {
			if (arr[j] == 0)continue;
			for (int k = j + 1; k < i; k++) {
				if (arr[k] == 0)continue;
				if (i==j+k) {
					cnt++;
					goto m;
				}
			}

		}
	}
	printf("%d", cnt);
	return 0;
}