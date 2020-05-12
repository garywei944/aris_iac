/**
 * daffodil.cpp
 * @authors Gary Wei (garywei11@qq.com)
 * @date    2018-02-03 17:31:32
 * @version $Id$
 */

#include <iostream>
using namespace std;

int main() {
	for (int i = 100; i <= 999; i++) {
		int a = i / 100,
		    b = (i - a * 100) / 10,
		    c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c) cout << i << endl;
	}

	return 0;
}
