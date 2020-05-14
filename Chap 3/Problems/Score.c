/**
 * Score.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>
char s[85];

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Score.in", "r", stdin);
#endif
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		scanf("%s", s);
		int n = strlen(s);
		int t = 0, score = 0;
		for (int j = 0; j < n; j++) {
			if (s[j] == 'X')
				t = 0;
			else
				score += ++t;
		}
		printf("%d\n", score);
	}
	return 0;
}
