#include<stdio.h>
#include<string.h>
char w[15][15];
int check(int xa, int ya, int xb, int yb) {
	int a[2] = { 0, 0 };
	for (int i = xa; i <= xb; i++) {
		for (int j = ya; j <= yb; j++) {
			a[w[i][j]-'0']++;
		}
	}
	return a[0] == a[1];
}
int main()
{
	int n, m,max= 0,size=0;
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i <=n; i++) {
		fgets(w[i], sizeof(w[i]), stdin);
		w[i][strcspn(w[i], "\n")] = 0;
	}
	for (int xa = 1; xa <= n; xa++) {
		for (int ya = 0; ya < m; ya++) {
			for (int xb = xa; xb <= n; xb++) {
				for (int yb = ya; yb < m; yb++) {
					if (check(xa, ya, xb, yb)) {
						size = (xb - xa + 1) * (yb - ya + 1);
						if (size > max) {
							max = size;
						}
					}
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}