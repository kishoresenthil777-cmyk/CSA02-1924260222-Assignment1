#include <stdio.h>

#define METER_MAX 65535U

unsigned int consumption(unsigned int previous, unsigned int current)
{
    if (current >= previous)
        return current - previous;

    return (METER_MAX - previous) + current + 1U;
}

long calculate_bill(unsigned int units)
{
    long bill = 5000L;

    if (units > 100 && units <= 200)
        bill += (long)(units - 100) * 225L;
    else if (units > 200)
        bill += 100L * 225L + (long)(units - 200) * 450L;

    return bill;
}

void test_case(const char *name, unsigned int previous,
               unsigned int current, unsigned int expected_units)
{
    unsigned int actual_units = consumption(previous, current);
    long bill = calculate_bill(actual_units);

    printf("%s\n", name);
    printf("Expected units: %u | Actual units: %u | %s\n",
           expected_units, actual_units,
           expected_units == actual_units ? "PASS" : "FAIL");
    printf("Bill: Rs %ld.%02ld\n\n", bill / 100, bill % 100);
}

int main(void)
{
    test_case("Zero consumption", 1000, 1000, 0);
    test_case("100 units", 1000, 1100, 100);
    test_case("150 units", 1000, 1150, 150);
    test_case("200 units", 1000, 1200, 200);
    test_case("350 units", 1000, 1350, 350);
    test_case("Meter rollover", 65535, 0, 1);

    printf("Invalid input must be tested separately.\n");

    return 0;
}
