#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int square(int x)
{
    return x * x;
}

int main(void)
{
    int a = 4;
    int b = 6;

    printf("Square of %d = %d\n", a, SQUARE(a));
    printf("Maximum of %d and %d = %d\n", a, b, MAX(a, b));
    printf("Square using function = %d\n", square(a));

    return 0;
}
