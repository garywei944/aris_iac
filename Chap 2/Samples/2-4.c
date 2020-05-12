/**
 * 2-4.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/12/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
	const int MOD = 1000000;
	int n, s = 0;
	scanf("%d", &n);
	if (n > 25)
		n = 25;
	for (int i = 1; i <= n; i++) {
		int fac = 1;
		for (int j = 1; j <= i; j++)
			fac = fac * j % MOD;
		s = (s + fac) % MOD;
	}
	printf("%d\n", s);
	printf("Process exited after %.3f seconds with return value 0\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}
