#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,m;
	cin >>n >> m;
	int ans = INT_MAX, sum = 0;
	int num[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		sum += num[i];
		int left = i - m + 1;
		if (left < 0) {
			continue;
		}
		ans = min(ans, sum);
		sum -= num[left];
	}
	cout << ans << endl;
	return 0;
}
