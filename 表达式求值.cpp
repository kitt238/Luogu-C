#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isfuhao(char c) {
	if (c == '+' || c == '*') {
		return 1;
	}
	return 0;
}

int main() {
	stack<int>num;
	string str;
	int end=0;
	cin >> str;
	for (int i = 0; i < str.size();i++) {
		long long tmp = 0;
		while (!isfuhao(str[i])) {
			tmp *= 10;
			tmp += str[i] - '0'; 
			if (i == str.size() - 1)break;
			i++;
		}
		tmp %= 10000;
		num.push(tmp);
		while (str[i] == '*') {
			i++;
			tmp = 0;
			while (!isfuhao(str[i])) {
				tmp *= 10;
				tmp += str[i] - '0';
				if (i == str.size() - 1)break;
				i++;
			}
			num.top() *= tmp;
			num.top() %= 10000;
		}
	}
	while (!num.empty()) {
		end += num.top();
		end %= 10000;
		num.pop();
	}
	cout << end;
	return 0;
}