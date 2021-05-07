#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, j;
    long int m, n;
    int count;
    int isPrime, flag;

    isPrime = 1;
    flag = 0;

    scanf("%ld", &n);
    printf("%ld=", n);
    m = sqrt(n);
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            //printf("%d",i);
            isPrime = 0;
            count = 1;
            n = n / i;
            while (n % i == 0)
            {
                n = n / i;
                count++;
            }
            if (flag)
                printf("*");
            else
                flag = 1;
            if (count == 1)
                printf("%d", i);
            else
                printf("%d^%d", i, count);
        }
    }
    if (isPrime)
        printf("%d", n);

    return 0;
}