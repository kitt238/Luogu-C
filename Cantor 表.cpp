#include<stdio.h>
int main()
{
	int n,a=1,b=1,sum=2;
	scanf_s("%d", &n);
	for (int i = 1; i <n; i++) {
		if (a == 1&&b%2!=0) {
			b++;
			sum++;
		}
		else if (b == 1 && a % 2 == 0) {
			a++;
			sum++;
		}
		else {
			if (sum % 2 != 0) {
				a++;
				b = sum - a;
			}
			else {
				b++;
				a = sum - b;
			}
		}

	}
	printf("%d/%d", a, b);

	return 0;
}