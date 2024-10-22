#include<iostream>
#include<algorithm>
using namespace std;
int hit[200000];
struct ball {
	int ic;
	int num;
}a[200000];
int check(int k, int l, int r) {
	if (l == r) {
		if (a[l].num == k)return a[l].ic;
		else return 0;
	}
	else {
		int mid = (l + r) / 2;
		if (k == a[mid].num)return a[mid].ic;
		else if (k > a[mid].num)return check(k, mid + 1, r);
		else return check(k, l, mid);
	}
}
int main()
{
	int n, Q;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i].ic = i;
		cin >> a[i].num;
	}
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> hit[i];
	}
	sort(a + 1, a + n + 1, [](const ball& a, const ball& b) {
		return a.num < b.num;
		});
	for (int i = 1; i <= Q; i++) {
		cout<<check(hit[i], 1, n)<<endl;
	}
	
	return 0;
}