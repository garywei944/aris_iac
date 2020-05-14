/**
 * Digit Generator.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>
#define MAX 100005

int arr[MAX];

int main(int argc, char *argv[]) {
	int m, n;
	memset(arr, 0, MAX * sizeof(int));
	for (int i = 1; i < MAX; i++) {
		int x = i, y = i;
		while (x > 0) {
			y += x % 10;
			x /= 10;
		}
		if (arr[y] == 0 || arr[y] > i)
			arr[y] = i;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &n);
		printf("%d\n", arr[n]);
	}
	return 0;
}
