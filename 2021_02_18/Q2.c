#include <stdio.h>
#include <math.h>
int main()
{
    int nb;
    double n, m, num;
    scanf("%d", &nb);
    while (nb--)
    {
        scanf("%lf%lf", &n, &m);
        num = pow((n - 10) * (n - 10) + (m - 10) * (m - 10), 0.5);
        if (num <= 1)
        {
            printf("10\n");
        }
        else if (num <= 2)
        {
            printf("9\n");
        }
        else if (num <= 3)
        {
            printf("8\n");
        }
        else if (num <= 4)
        {
            printf("7\n");
        }
        else if (num <= 5)
        {
            printf("6\n");
        }
        else if (num <= 6)
        {
            printf("5\n");
        }
        else if (num <= 7)
        {
            printf("4\n");
        }
        else if (num <= 8)
        {
            printf("3\n");
        }
        else if (num <= 9)
        {
            printf("2\n");
        }
        else if (num <= 10)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}