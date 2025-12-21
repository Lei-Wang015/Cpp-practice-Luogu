#include<bits/stdc++.h>
using namespace std;
int main () {
	int day = 0;
	cin >> day;
	int tem[day] = {0};
	int ans = 0;
	for (int i = 0; i < day; i++) {
		cin >> tem[i];
	}
	int cnt = 0;
	for (int i = 1; i < day; i++) {
		if (tem[i - 1] < tem[i]) {
			cnt++;	
			ans = max(ans, cnt);
		} else {
			cnt = 0;
		}
	}
	cout << ans + 1 << endl;
	return 0;
}
