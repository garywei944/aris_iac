/**
 * Digit Counting.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/14/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>
int arr[10];

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("Digit Counting.in", "r", stdin);
#endif
	int m;
	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		int n;
		scanf("%d", &n);
		memset(arr, 0, sizeof(arr));

		for (int j = 1; j <= n; j++) {
			int temp = j;
			while (temp) {
				arr[temp % 10]++;
				temp /= 10;
			}
		}
		for (int j = 0; j < 9; ++j)
			printf("%d ", arr[j]);
		printf("%d\n", arr[9]);
	}
	return 0;
}
