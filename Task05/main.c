#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
#ifdef DEBUG
    printf("Debug mode enabled\n");
#endif

    printf("Maximum integer value: %d\n", INT_MAX);
    printf("Float precision: %d decimal digits\n", FLT_DIG);

    return 0;
}
