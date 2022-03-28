#include <cs50.h>
#include <stdio.h>


int main(void)
{
int number = get_long("your credit card number? ");

    int i = 0;
    long cc = number;
    while (cc > 0)
    {
        cc = cc / 10;
        i++;
    }

if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
        return 0;
    }


int sum1 = 0;
    int sum2 = 0;
    long x = number;
    int total = 0;
    int mod1;
    int mod2;
    int d1;
    int d2;
    do
    {
        // Remove last digit and add to sum1
        mod1 = x % 10;
        x = x / 10;
        sum1 = sum1 + mod1;
        // Remove second last digit
        mod2 = x % 10;
        x = x / 10;
        // Double second last digit and add digits to sum2
        mod2 = mod2 * 2;
        d1 = mod2 % 10;
        d2 = mod2 / 10;
        sum2 = sum2 + d1 + d2;
    }
    while (x > 0);
    total = sum1 + sum2;

printf("%i\n",total);




















}
