/**
 * demo.c
 * @authors garywei944 (garywei944@gmail.com)
 * @date    05/13/2020
 * @link    https://github.com/garywei944
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	for (double i = 0; i != 10; i += 0.1) {
		printf("%.1f\n", i);
	}
	return 0;
}
