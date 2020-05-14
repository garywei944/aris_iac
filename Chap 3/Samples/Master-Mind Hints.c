/**
 * Master-Mind Hints.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Master-Mind Hints.in", "r", stdin);
#endif
	int n, a[1010], b[1010];
	int kase = 0;
	while (scanf("%d", &n) == 1 && n) {
		printf("Game %d:\n", ++kase);
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		while (1) {
			int A = 0, B = 0;
			for (int i = 0; i < n; i++) {
				scanf("%d", &b[i]);
				if (a[i] == b[i])
					A++;
			}
			if (b[0] == 0)
				break;
			for (int d = 1; d <= 9; d++) {
				int c1 = 0, c2 = 0;
				for (int i = 0; i < n; i++) {
					if (a[i] == d) c1++;
					if (b[i] == d) c2++;
				}
				B += (c1 > c2) ? c2 : c1;
			}
			printf("    (%d,%d)\n", A, B - A);
		}
	}
	return 0;
}
