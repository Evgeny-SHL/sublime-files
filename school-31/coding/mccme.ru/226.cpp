#include <iostream>
using namespace std;

int main() {
	int n, a[999], x;

	cin >> n;
	for (int i = 0; i < n; )
		cin >> a[i++];
	cin >> x;

	for (int i = 0; i < n; i++)
		if (a[i] == x) cout << i+1 << " ";

	return 0;
}