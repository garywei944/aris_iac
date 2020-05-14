/**
 * Molar Mass.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define __C 12.01
#define __H 1.008
#define __O 16.00
#define __N 14.01

char s[85];

double mass(char c) {
	switch (c) {
	case 'C':
		return __C;
	case 'H':
		return __H;
	case 'O':
		return __O;
	case 'N':
		return __N;
	default:
		return 0;
	}
}

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Molar Mass.in", "r", stdin);
#endif
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%s", s);
		double r = 0;
		char curr = 0;
		int num = 0;
		int n = strlen(s);

		for (int j = 0; j < n; j++) {
			if (isalpha(s[j])) {
				r += mass(curr) * (num ? num : 1);
				curr = s[j];
				num = 0;
			}
			else
				num = num * 10 + (s[j] - '0');
		}
		r += mass(curr) * (num ? num : 1);
		printf("%.3f\n", r);
	}
	return 0;
}
