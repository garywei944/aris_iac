/**
 * decimal.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int a, b, c, kase = 0;
	while (scanf("%d %d %d", &a, &b, &c) == 3 && a != 0 && b != 0 && c != 0) {
		double r = (double)a / b;
		printf("Case %d: %d.", ++kase, (int)r);
		for (int i = 0; i < c - 1; i++) {
			r *= 10;
			printf("%d", (int)r % 10);
		}
		r *= 10;
		printf("%d", (int)(r + 0.5) % 10);
		printf("\n");
	}
	return 0;
}
