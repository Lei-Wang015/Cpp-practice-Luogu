#include<iostream>
using namespace std;
int main () {
	int num[10];
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	int height = 0;
	cin >> height;
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (num[i] <= height + 30) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
