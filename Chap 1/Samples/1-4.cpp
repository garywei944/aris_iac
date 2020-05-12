#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (m < n * 2 || m > n * 4)
		cout << "No answer" << endl;
	else
		cout << (4 * n - m) / 2 << " " << (m - 2 * n) / 2 << endl;

	return 0;
}
