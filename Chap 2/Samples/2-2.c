#include <stdio.h>

int main() {
	unsigned int n, c = 0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 1)
			n = 3 * n + 1;
		else
			n /= 2;
		c++;
	}
	printf("%d\n", c);
	return 0;
}
