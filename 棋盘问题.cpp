#include<stdio.h>
int main()
{
	int i, j;
	int zheng = 0,chang = 0;
	scanf_s("%d %d", &i, &j);
	for (int a = 0; a <= i-1; a++) {
		for (int b = 0; b <= j-1; b++) {
			for (int x = a + 1; x <= i; x++) {
				for (int y = b + 1; y <= j; y++) {
					if (x - a == y - b)
						zheng++;
					else
						chang++;
				}
			}
		}
	}
	printf("%d %d", zheng, chang);

	return 0;
}