#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int k = 0;
	cin >> k;
	bool flag = true;
	for (int  i = 10000; i <= 30000; i++) {
		if (i / 100 % k == 0 && (i % 10000) / 10 % k == 0 && i % 1000 % k == 0) {
			cout << i << endl;
			flag = false;
		}
	}
	if (flag) {
		cout << "No" << endl;
	}
	return 0;
}
