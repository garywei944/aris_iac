/**
 * Circular Sequence.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>
char s[105];

int less(int a, int b) {
	int n = strlen(s);
	for (int i = 0; i < n; i++)
		if (s[(a + i) % n] != s[(b + i) % n])
			return s[(a + i) % n] < s[(b + i) % n];
	return 0;
}

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Circular Sequence.in", "r", stdin);
#endif
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		scanf("%s", s);
		int p = 0, n = strlen(s);
		for (int j = 1; j < n; ++j)
			if (less(j, p))
				p = j;
		printf("%s", s + p);
		s[p] = '\0';
		printf("%s\n", s);
	}
	return 0;
}
