/**
 * Crossword Answers.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/15/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>

char s[10][10];
int arr[10][10];

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Crossword Answers.in", "r", stdin);
#endif
	int x, y, kase = 0;
	while (scanf("%d %d", &x, &y) == 2) {
		// Input
		memset(s, 0, sizeof(s));
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < x; i++)
			scanf("%s", s[i]);

		// Number the entry
		int count = 0;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				if ((s[i][j] != '*') && (i == 0 || j == 0 || s[i][j - 1] == '*' || s[i - 1][j] == '*'))
					arr[i][j] = ++count;
			}
		}

		// Output
		if (kase)
			printf("\n");
		printf("puzzle #%d:\n", ++kase);

		// Across
		printf("Across\n");
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				if (arr[i][j] && (j == 0 || s[i][j - 1] == '*')) {
					printf("%3d.", arr[i][j]);
					for (; j < y && s[i][j] != '*'; j++)
						printf("%c", s[i][j]);
					printf("\n");
				}
			}
		}

		// Down
		printf("Down\n");
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				if (arr[i][j] && (i == 0 || s[i - 1][j] == '*')) {
					printf("%3d.", arr[i][j]);
					for (int k = i; k < x && s[k][j] != '*'; k++)
						printf("%c", s[k][j]);
					printf("\n");
				}
			}
		}
	}
	return 0;
}
