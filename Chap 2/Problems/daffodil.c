/**
 * daffodil.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 100; i <= 999; i++) {
		int a = i / 100;
		int b = i / 10 % 10;
		int c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%d\n", i);
	}
	return 0;
}
