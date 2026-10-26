#include <stdio.h>

#define READINGS_PER_HOUSE 35040LL
#define HOUSEHOLDS 800000LL

int main(void)
{
    long long total_readings;
    long long watt_hours;
    long long energy_paise;
    int hour;
    int base_rate_paise;
    int peak_rate_paise;

    FILE *file = fopen("tariff.txt", "r");

    if (file == NULL) {
        printf("Error: Cannot open tariff.txt\n");
        return 1;
    }

    if (fscanf(file, "%d %d",
               &base_rate_paise, &peak_rate_paise) != 2 ||
        base_rate_paise < 0 || peak_rate_paise < 0) {
        printf("Error: Invalid tariff configuration\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    printf("Enter consumption in watt-hours: ");
    if (scanf("%lld", &watt_hours) != 1 || watt_hours < 0) {
        printf("Invalid consumption input\n");
        return 1;
    }

    printf("Enter hour (0-23): ");
    if (scanf("%d", &hour) != 1 || hour < 0 || hour > 23) {
        printf("Invalid hour\n");
        return 1;
    }

    if (hour >= 18 && hour < 22) {
        energy_paise = (watt_hours * peak_rate_paise * 120LL) / 100LL;
        printf("Peak-hour surcharge applied: 20%%\n");
    } else {
        energy_paise = watt_hours * base_rate_paise;
        printf("Normal tariff applied\n");
    }

    total_readings = READINGS_PER_HOUSE * HOUSEHOLDS;

    printf("Total yearly readings: %lld\n", total_readings);
    printf("Consumption: %lld Wh\n", watt_hours);
    printf("Energy charge: %lld paise\n", energy_paise);
    printf("Energy charge: Rs %lld.%02lld\n",
           energy_paise / 100, energy_paise % 100);

    return 0;
}
