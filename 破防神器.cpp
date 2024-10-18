#include<stdio.h>
#include<stdlib.h>
int funct(char date[]) {
	int ret =1;
	for (int i = 0; i < 8; i++){
		if (date[i] != date[7 - i]) {
			ret = 0;
			break;
		}
	}
	return ret;
}
void add(char date0[]) {
	int year, mon, day;
	sscanf_s(date0, "%4d", &year);
	sscanf_s(date0, "%*4d%2d", &mon);
	sscanf_s(date0, "%*6d%2d", &day);
	if (mon == 12 && day == 31) {
		mon = 1;
		day = 1;
		year++;
	}
	else {
		if (mon % 2 == 1) {
			if (day == 31) {
				day = 1;
				mon++;
			}
			else {
				day++;
			}
		}
		else if (mon % 2 == 0 && mon != 2) {
			if (day == 30) {
				day = 1;
				mon++;
			}
			else {
				day++;
			}
		}
		else {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				if (day == 29) {
					day = 1;
					mon++;
				}
				else {
					day++;
				}
			}
			else {
				if (day == 28) {
					day = 1;
					mon++;
				}
				else {
					day++;
				}
			}
		}
	}
	snprintf(date0, sizeof(date0), "%.4d%.2d%.2d", year, mon,day);
}
int main()
{
	int cnt = 0;
	char date1[20],date2[20];
	fgets(date1, sizeof(date1), stdin);
	fgets(date2, sizeof(date2), stdin);
	/*for (int i = 0; i < 8; i++) {
		date0[i] = date1[i];
	}*/
	while(date1!=date2){
		if(funct(date1))cnt++;
		add(date1);
	}
	printf("%d", cnt);
	return 0;
}