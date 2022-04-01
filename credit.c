#include <cs50.h>
#include <stdio.h>


int main(void)
{
long number = get_long("your credit card number? ");

   long i = 0;
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


    long sum1 = 0;
    long sum2 = 0;
    long x = number;
   long total = 0;
   long mod1;
   long mod2;
   long d1;
   long d2;
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

if (total % 10 != 0)
    {
    printf("INVALID\n");
    return 0;
    }


long bit = number;
do
{
    bit = bit / 100;
}
while (bit > 100);

while( bit >= 100);

if (i == 15)
    {if ( bit == 34 || bit == 37)
        printf("AMEX\n");
     else
        printf("INVALID\n");
    return 0;}


if (i == 16)
    {if ( bit == 51 || bit == 52 || bit == 53 || bit == 55 || bit == 56)
        printf("MASTERCARD\n");
     else if ( bit / 10 == 4)
        printf("VISA\n");
     else
        printf("INVALID\n");
    return 0;
    }


if (i == 13)
    {if ( bit / 10 == 4)
        printf("VISA\n");
     else
        printf("INVALID\n");
    return 0;
    }


return 0;
}
