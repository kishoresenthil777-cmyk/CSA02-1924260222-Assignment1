#include <stdio.h>
#include <limits.h>

#define FREE_UNITS 100
#define RATE2_PAISE 225LL
#define RATE3_PAISE 450LL
#define FIXED_CHARGE_PAISE 5000LL

long long calculate_bill(unsigned int units)
{
    long long bill = FIXED_CHARGE_PAISE;

    if (units > FREE_UNITS && units <= 200) {
        bill += (long long)(units - FREE_UNITS) * RATE2_PAISE;
    } else if (units > 200) {
        bill += 100LL * RATE2_PAISE;
        bill += (long long)(units - 200) * RATE3_PAISE;
    }

    return bill;
}

int main(void)
{
    unsigned int units = 350;
    long long bill = calculate_bill(units);

    printf("Recommended Data Types\n");
    printf("Meter reading: unsigned short (16-bit when supported)\n");
    printf("Accumulated totals: long long\n");
    printf("Money: integer paise\n\n");

    printf("Units consumed: %u\n", units);
    printf("Total bill: Rs %lld.%02lld\n", bill / 100, bill % 100);
    printf("Maximum int value: %d\n", INT_MAX);

    return 0;
}
