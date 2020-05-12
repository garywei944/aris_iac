#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n = n / 100 + n / 10 % 10 * 10 + n % 10 * 100;
    printf("%03d\n", n);
    return 0;
}
