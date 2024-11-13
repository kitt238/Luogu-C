#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>
#define int long long
using namespace std;

signed main() {
    int n, m, k, l, r, command, run;
    deque<int>q;
    vector<int>v;
    cin >> n >> m >> k;
    l = -k, r = k;
    for (int i = 0; i < n; i++) {
        int loc;
        cin >> loc;
        q.push_back(loc);
    }
    sort(q.begin(), q.end());
    for (int i = 0; i < m; i++) {
        cin >> command;
        switch (command) {
        case 1:
            cin >> run;
            l -= run;
            r -= run;
            while (!q.empty()) {
                if (q.back() > r) {
                    q.pop_back();
                }
                else break;
            }
            break;
        case 2:
            cin >> run;
            r += run;
            l += run;
            while (!q.empty()) {
                if (q.front() < l) {
                    q.pop_front();
                }
                else break;
            }
            break;
        case 3:
            if (!q.empty())v.push_back(q.size());
            else v.push_back(0);
            break;
        }
    }
    for (auto e : v) {
        cout << e << endl;
    }
    return 0;

}