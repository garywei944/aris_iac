/**
 * Periodic Strings.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>

char s[85];

int check(int x) {
	int temp = x;
	int n = strlen(s);
	while (temp < n) {
		if (strncmp(s, s + temp, x))
			return 0;
		temp += x;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	int m;
	int flag = 0;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		if (flag)
			printf("\n");
		scanf("%s", s);
		int n = strlen(s);
		int done = 0;
		for (int j = 1; j < n; ++j) {
			if (check(j)) {
				printf("%d\n", j);
				done = 1;
				break;
			}
		}
		if (!done)
			printf("%d\n", n);
		flag = 1;
	}
	return 0;
}
