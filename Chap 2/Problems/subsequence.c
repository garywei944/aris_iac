/**
 * subsequence.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	unsigned long long m, n;
	int kase = 0;
	while (scanf("%llu %llu", &n, &m) == 2 && m != 0 && n != 0) {
		double r = 0;
		for (unsigned long long i = n; i <= m; i++) {
			r += 1.0 / i / i;
		}
		printf("Case %d: %.5f\n", ++kase, r);
	}
	return 0;
}
