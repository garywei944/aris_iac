#include <stdio.h>
#include <math.h>

#define PI acos(-1)

int main() {
    int x;
    scanf("%d", &x);
    double n =x*PI/180;
    printf("%f %f\n", sin(n), cos(n));
    return 0;
}
