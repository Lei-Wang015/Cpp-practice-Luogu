#include<iostream>
using namespace std;
int main () 
{
	int tree = 0, l = 0;
	cin >> tree >> l;
	int on[tree + 1] = {0};
	int begin = 0, end = 0;
	int ans = 0;
	for (int i = 0; i < l; i++) {
		cin >> begin >> end;
		for (int i = begin; i <= end; i++) {
			on[i] = 1;
		}
	}
	for (int i = 0; i <= tree; i++) {
		if (on[i] == 0) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
