#include<stdio.h>
int main()
{
	int sum = 0, cnt = 1;
	char mod[12] = "0123456789X";
	char code[14];
	fgets(code, sizeof(code), stdin);
	for (int i = 0; i < 12; i++) {
		if (code[i] >= '0' && code[i] <= '9')
		{
			sum += (code[i]-'0') * cnt;
			cnt++;
		}
	}
	if (mod[sum%11]==code[12])
		printf("Right");
	else {
		code[12] = mod[sum % 11];
		puts(code);
	}
	
	return 0;
}