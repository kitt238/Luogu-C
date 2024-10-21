#include<stdio.h>
int a[6000000], b[6000000];
int re() {
	int x = 0, f = 1;
	char ch;
	ch = getchar();
	while (ch < '0' || ch>'9') {
		if (ch == '-')f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
int check(int b,int beg,int  end) {
	int addr = -1;
	if (beg == end) {
		if (b == a[beg])addr = beg;
	}
	else {
		int mid = (beg + end) / 2;
		if (b > a[mid])addr=check(b, mid + 1, end);
		else addr=check(b, beg, mid);
	}
	return addr;
}
int main()
{
	int n, m,addr;
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		a[i] = re();
	}
	for (int i = 1; i <= m; i++) {
		b[i] = re();
	}
	for (int i = 1; i <= m; i++) {
		addr = check(b[i], 1, n);
		printf("%d ", addr);
	}
	return 0;
}