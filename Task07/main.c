#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = 5, b = 2;
    long large_value = 100000L;
    int small_value;

    printf("Integer division: %d / %d = %d\n", a, b, a / b);
    printf("Explicit casting: %.2f\n", (double)a / b);

    small_value = (int)large_value;
    printf("Long value: %ld\n", large_value);
    printf("Converted int value: %d\n", small_value);

    printf("Maximum int value: %d\n", INT_MAX);

    return 0;
}
