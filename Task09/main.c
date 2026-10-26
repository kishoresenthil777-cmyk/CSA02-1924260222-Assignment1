#include <stdio.h>
#include <limits.h>

#define METER_MAX 65535U
#define FREE_UNITS 100U
#define SECOND_SLAB_UNITS 100U
#define RATE2_PAISE 225L
#define RATE3_PAISE 450L
#define FIXED_CHARGE_PAISE 5000L

int main(void)
{
    unsigned int previous, current, units;
    long bill_paise;

    printf("Enter previous meter reading: ");
    if (scanf("%u", &previous) != 1 || previous > METER_MAX) {
        printf("Invalid previous reading!\n");
        return 1;
    }

    printf("Enter current meter reading: ");
    if (scanf("%u", &current) != 1 || current > METER_MAX) {
        printf("Invalid current reading!\n");
        return 1;
    }

    if (current >= previous) {
        units = current - previous;
    } else {
        units = (METER_MAX - previous) + current + 1U;
    }

    if (units <= FREE_UNITS) {
        bill_paise = FIXED_CHARGE_PAISE;
    } else if (units <= FREE_UNITS + SECOND_SLAB_UNITS) {
        bill_paise = (long)(units - FREE_UNITS) * RATE2_PAISE
                   + FIXED_CHARGE_PAISE;
    } else {
        bill_paise = SECOND_SLAB_UNITS * RATE2_PAISE
                   + (long)(units - FREE_UNITS - SECOND_SLAB_UNITS)
                     * RATE3_PAISE
                   + FIXED_CHARGE_PAISE;
    }

    printf("\nElectricity Consumption: %u units\n", units);
    printf("Energy and Fixed Charges: Rs %ld.%02ld\n",
           bill_paise / 100, bill_paise % 100);

    return 0;
}
