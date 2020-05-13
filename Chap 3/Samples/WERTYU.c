/**
 * WERTYU.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>
char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(int argc, char *argv[]) {
	char c, *p;
	while ((c = getchar()) != EOF) {
		if ((p = strchr(s, c)))
			putchar(*--p);
		else
			putchar(c);
		}
	return 0;
}
