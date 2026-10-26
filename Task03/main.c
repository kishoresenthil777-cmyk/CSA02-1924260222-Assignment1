#include <stdio.h>

#define SLAB1_UNITS 100
#define SLAB2_UNITS 100
#define RATE2_PAISE 225
#define RATE3_PAISE 450
#define FIXED_CHARGE_PAISE 5000

int main(void)
{
    printf("First slab: %d units free\n", SLAB1_UNITS);
    printf("Second slab: %d units\n", SLAB2_UNITS);
    printf("Rate for units 101-200: %d paise per unit\n", RATE2_PAISE);
    printf("Rate above 200 units: %d paise per unit\n", RATE3_PAISE);
    printf("Fixed charge: %d paise\n", FIXED_CHARGE_PAISE);

    return 0;
}
