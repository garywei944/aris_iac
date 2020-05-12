#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 33; i < 100; i++) {
		int n = i * i;
		int a = n / 100;
		int b = n % 100;
		if (a / 10 == a % 10 && b / 10 == b % 10)
			printf("%d\n", n);
	}
	return 0;
}
