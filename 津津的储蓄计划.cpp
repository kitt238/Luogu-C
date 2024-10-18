#include<stdio.h>
int main()
{
	const int mon = 300;
	int chun=0,i,hua[12], yu=0;
for (i = 0; i < 12; i++)
	{
		scanf_s("%d", &hua[i]);
	}
	
	for (i = 0; i < 12; i++)
	{
		if (mon + yu - hua[i]>= 0)
		{
			chun +=
				(mon + yu - hua[i]) / 100 * 100;
			yu =
				(mon + yu - hua[i]) % 100;
			
		}
		else 
		{
			printf("%d", -1-i);
			break;
		}
		
	}
	if (i == 12)
		printf("%d", yu + chun * 12 / 10);

	return 0;
}