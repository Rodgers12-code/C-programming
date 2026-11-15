#include <stdio.h>

int main(void)
{
    double balance;
    double amount;

    printf("Enter your account balance: ");
    scanf("%lf", &balance);

    while (balance > 0)
    {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &amount);

        balance = balance - amount;

        printf("Balance after withdrawal: %.2f\n", balance);
    }

    printf("Balance is zero or negative. No more withdrawals allowed.\n");

    return 0;
}
