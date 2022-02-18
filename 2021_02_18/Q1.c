#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    int n, p;
    double sum = 0, tmp;
    scanf("%lf", &r);
    scanf("%d", &n);
    scanf("%d", &p);
    while (n != 0)
    {
        sum = sum + p;
        sum = sum * (1 + r);
        n--;
    }
    printf("%d\n", (int)sum);
}