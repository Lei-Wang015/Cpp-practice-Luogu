#include<iostream>
using namespace std;
int main ()
{
	int school = 0, home = 0;
	int sweep[7] = {0};
	int min = 0;
	int ans = 0;
	for (int i = 0; i < 7; i++) {
		cin >> school >> home;
		sweep[i] = school + home - 8;
		if (sweep[i] > min) {
			ans = i + 1;
			min = sweep[i];
		}
	}
	cout << ans << endl;
}
