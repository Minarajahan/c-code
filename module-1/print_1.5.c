#include <stdio.h>
int main()
{
    float a, b, r, h;
    scanf("%f,%f,%f", &a, &b, &h);
    r = 1.0 / 2 * (a + b) * h;
    printf("%.2f\n", r);
    return 0;
}