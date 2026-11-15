#include <stdio.h>

double calculateElectricBill(int units)
{
    double bill = 0.0;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = 100 * 10 + (units - 100) * 15;
    }
    else
    {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main(void)
{
    int units;
    double total;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    total = calculateElectricBill(units);

    printf("Total bill: KSh. %.2f\n", total);

    return 0;
}
