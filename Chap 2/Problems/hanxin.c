/**
 * hanxin.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int kase = 0, a, b, c;
	_Bool ans;
	while (scanf("%d %d %d", &a, &b, &c) == 3) {
		ans = 0;
		for (int i = 10; i <= 100; i++) {
			if (i % 3 == a && i % 5 == b && i % 7 == c) {
				printf("Case %d: %d\n", ++kase, i);
				ans = 1;
				break;
			}
		}
		if (!ans)
			printf("Case %d: No answer\n", ++kase);
	}
	return 0;
}
