#include<bits/stdc++.h>
using namespace std;
long long int frac(long long int n);
int main () {
	long long int sum = 0;
	int n = 0;
	cin >> n;
	while (n > 0) {
		sum += frac(n);
		n--;
	}
	cout << sum << endl;
	return 0;
}
long long int frac(long long int n) {
	long long int ans = 1;
	while (n > 0) {
		ans *= n;
		n--;
	}
	return ans;
}
