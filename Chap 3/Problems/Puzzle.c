/**
 * Puzzle.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/15/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <ctype.h>
char arr[5][5];

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Puzzle.in", "r", stdin);
#endif

	int kase = 0;
	while (1) {
		int x, y, done = 0;
		for (int i = 0; i < 25; i++) {
			int p = i / 5, q = i % 5;
			char c = getchar();
			if (c == 'Z') {
				done = 1;
				break;
			}
			else if (isalpha(c))
				arr[p][q] = c;
			else if (c == ' ' || (c == '\n' && q == 4)) {
				arr[p][q] = ' ';
				x = p;
				y = q;
			}
			else
				i--;
		}
		if (done)
			break;
		char c;
		int valid = 1;
		while (scanf("%c", &c) == 1 && c - '0') {
			if (!valid)
				continue;
			switch (c) {
			case 'A':
				if (x == 0) {
					valid = 0;
					break;
				}
				arr[x][y] = arr[x - 1][y];
				x--;
				arr[x][y] = ' ';
				break;
			case 'B':
				if (x == 4) {
					valid = 0;
					break;
				}
				arr[x][y] = arr[x + 1][y];
				x++;
				arr[x][y] = ' ';
				break;
			case 'L':
				if (y == 0) {
					valid = 0;
					break;
				}
				arr[x][y] = arr[x][y - 1];
				y--;
				arr[x][y] = ' ';
				break;
			case 'R':
				if (y == 4) {
					valid = 0;
					break;
				}
				arr[x][y] = arr[x][y + 1];
				y++;
				arr[x][y] = ' ';
				break;
			}
		}
		if (kase)
			printf("\n");
		printf("Puzzle #%d:\n", ++kase);
		if (!valid) {
			printf("This puzzle has no final configuration.\n");
			continue;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%c ", arr[i][j]);
			}
			printf("%c\n", arr[i][4]);
		}
	}
	return 0;
}
