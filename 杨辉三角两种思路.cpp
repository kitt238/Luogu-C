#include<stdio.h>
long long F(int i){
	long long ret = 1;
	for (int n=1;n<=i;n++) {
		ret *= n;
	}
	return ret;
}
int main(){
	int n;
	scanf_s("%d", &n);
	printf("1\n");
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%lld ", F(i) / (F(i - j) * F(j)));
			if (j == i)
				printf("\n");
		}
	}
	return 0;
}
//////////////////////////////////////////////////////////
#include<cstdio>
int a[21][21];
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		a[i][1] = a[i][i] = 1;//����ֵ
	for (int i = 1; i <= n; i++)
		for (int j = 2; j < i; j++)//��Ϊa[i][1]��a[i][i]�Ѿ���ֵ���ˣ�����ѭ����2~n-1
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}