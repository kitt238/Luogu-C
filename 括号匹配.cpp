#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

bool isfuhao(char c) {
    char fuhao[] = { '+','-','*','/' };
    for (int i = 0; i < 4; i++) {
        if (c == fuhao[i])return 1;
    }
    return 0;
}

bool isnum(char c){
    if (c >= '0' && c <= '9')return 1;
    return 0;
}

int main() {
    char func[1000];
    fgets(func, 1000, stdin);
    int cntL = 0, cntR = 0,ic=1;
    for (int i = 0; i < strlen(func); i++) {
        if (func[i] == '(') {
            if (isfuhao(func[i+1])||isnum(func[i-1])&& i > 0) {
                ic = 0;
                break;
            }
            cntL++;
        }
        if (func[i] == ')') {
            if (isnum(func[i + 1]) || isfuhao(func[i - 1]) && i > 0||i==0) {
                ic = 0;
                break;
            }
            cntR++;
        }
    }
    if (cntL != cntR) {
        ic = 0;
    }
    if (ic)printf("YES");
    else printf("NO");
    return 0;
}