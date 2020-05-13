/**
 * Tex Quotes.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Tex Quotes.in", "r", stdin);
	freopen("Tex Quotes.out", "w", stdout);
#endif
	int c, b = 1;
	while ((c = getchar()) != EOF) {
		if (c == '"') {
			printf("%s", b ? "``" : "\'\'");
			b = !b;
		}
		else
			printf("%c", c);
	}
	return 0;
}
