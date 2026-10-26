#include <stdio.h>

int main(void)
{
    int units;
    long bill_paise;

    printf("Enter units consumed: ");

    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input!\n");
        return 1;
    }

    if (units <= 100) {
        bill_paise = 5000;
    } else if (units <= 200) {
        bill_paise = (long)(units - 100) * 225 + 5000;
    } else {
        bill_paise = 100L * 225
                   + (long)(units - 200) * 450
                   + 5000;
    }

    printf("Units consumed: %d\n", units);
    printf("Bill: Rs %ld.%02ld\n",
           bill_paise / 100, bill_paise % 100);

    return 0;
}
