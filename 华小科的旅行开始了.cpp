#include<stdio.h>
int man[1050][2050];
int main()
{
	int m, n, Sx, Sy;
	scanf_s("%d %d %d %d", 
		&m, &n, &Sx, &Sy);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2*m; j++) {
			scanf_s("%d", &man[i][j]);
		}
	}
	int i = Sx, j = Sy;
	int i0 = i, j0 = j;
	while (i != 0 && j != 0){
		printf("%d %d\n", i, j);
		i0 = man[i][2 * j - 1];
		j0 = man[i][2 * j];
		i = i0, j = j0;
	} 
	return 0;
}