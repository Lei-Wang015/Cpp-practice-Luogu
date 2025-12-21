#include<bits/stdc++.h>
using namespace std;
int main () {
	string s;
	getline(cin, s);
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i - 1] == '=') {
			if (isdigit(s[i])) {
				cout << s[i] << ' ';
			}
			else {
				cout << '0' << ' ';
			}
		}
	}
	cout << endl;
	return 0;
}
