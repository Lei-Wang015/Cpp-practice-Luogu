#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int l,r;
	cin >> l >> r;
	int ans = 0;
	for (int i = l; i <= r; i++) {
		int x = i;
		while (x > 0) {
			if (x % 10 == 2) {
				ans++;
			}
			x /= 10;
		}
	}
	cout << ans << endl;
	return 0;
}
