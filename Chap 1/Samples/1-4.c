#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    a = (4 * n - m) / 2;
    b = (m - 2 * n) / 2;
    if (a < 0 || b < 0 || m%2!=0)
        printf("No answer\n");
    else
        printf("%d %d\n", a, b);
    return 0;
}
