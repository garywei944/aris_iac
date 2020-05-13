/**
 * permutation.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	_Bool arr[9];
	for (int i = 123; i <= 329; i++) {
		memset(arr, 0, 9);
		int temp = i;
		arr[temp / 100 - 1] = 1;
		arr[temp / 10 % 10 - 1] = 1;
		arr[temp % 10 - 1] = 1;
		temp += i;
		arr[temp / 100 - 1] = 1;
		arr[temp / 10 % 10 - 1] = 1;
		arr[temp % 10 - 1] = 1;
		temp += i;
		arr[temp / 100 - 1] = 1;
		arr[temp / 10 % 10 - 1] = 1;
		arr[temp % 10 - 1] = 1;
		_Bool b = 1;
		for (int j = 0; j < 9; j++)
			if (!arr[j])
				b = 0;
		if (!b)
			continue;
		printf("%d %d %d\n", i, i * 2, i * 3);
	}
	return 0;
}
