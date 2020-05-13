/**
 * triangle.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i; ++j)
			printf(" ");
		int s = 2 * n - 1 - 2 * i;
		for (int j = 0; j < s; j++)
			printf("#");
		printf("\n");
	}
	return 0;
}
