#include <stdio.h>

int main() {
    double n;
    scanf("%d", &n);
    n = n*95;
    if (n>300)
        n = n*0.85;
    printf("%f\n", n);
    return 0;
}
