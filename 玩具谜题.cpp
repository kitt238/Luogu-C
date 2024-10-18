#include<stdio.h>
int drt[100001], rl[100001], cmd[100001];
char job[100001][14];
int main() {
	int n, m, num = 0;
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf_s("%d ", &drt[i]);
		fgets(job[i], sizeof(job[i]), stdin);
	}
	for (int i = 0; i < m; i++) {
		scanf_s("%d %d",
			&rl[i], &cmd[i]);
	}
	for (int i = 0; i < m; i++) {
		if (drt[num] != rl[i]) {
			num += cmd[i];
		}
		else {
			num -= cmd[i];
		}
		while (num < 0) {
			num += n;
		}
		num %= n;
	}
	printf("%s", job[num]);
	return 0;
}