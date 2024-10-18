#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int funct(char date[]) {
    int ret = 1;
    for (int i = 0; i < 8; i++) {
        if (date[i] != date[7 - i]) {
            ret = 0;
            break;
        }
    }
    return ret;
}

void add(char* date) {
    int year, mon, day;
    sscanf_s(date, "%d%*c%d%*c%d", &year, &mon, &day);
    day++;
    if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
        if (day > 31) {
            day = 1;
            mon++;
        }
    }
    else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
        if (day > 30) {
            day = 1;
            mon++;
        }
    }
    else {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            if (day > 29) {
                day = 1;
                mon++;
            }
        }
        else {
            if (day > 28) {
                day = 1;
                mon++;
            }
        }
    }
    if (mon > 12) {
        mon = 1;
        year++;
    }
    snprintf(date, 20, "%04d/%02d/%02d", year, mon, day);
}

int main() {
    int cnt = 0;
    char date1[20], date2[20];
    fgets(date1, sizeof(date1), stdin);
    fgets(date2, sizeof(date2), stdin);
    date1[strcspn(date1, "\n")] = '\0';
    date2[strcspn(date2, "\n")] = '\0';
    while (strcmp(date1, date2) != 0) {
        if (funct(date1)) cnt++;
        add(date1);
    }
    printf("%d\n", cnt);
    return 0;
}
