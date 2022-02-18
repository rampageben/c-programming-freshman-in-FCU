#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j;
    int tmp;
    int a[8];
    int b[8];
    int c[6];
    int num1 = 0, num2 = 0;
    scanf("%d", &n);
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
        a[i] = a[i] * n;
    }
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &b[i]);
        b[i] = b[i] * n;
    }
    c[0] = (a[0] - a[2]) * (a[0] - a[2]) + (a[1] - a[3]) * (a[1] - a[3]);
    c[1] = (a[2] - a[4]) * (a[2] - a[4]) + (a[3] - a[5]) * (a[3] - a[5]);
    c[2] = (a[4] - a[6]) * (a[4] - a[6]) + (a[5] - a[7]) * (a[5] - a[7]);
    c[3] = (a[0] - a[6]) * (a[0] - a[6]) + (a[1] - a[7]) * (a[1] - a[7]);
    c[4] = (a[0] - a[4]) * (a[0] - a[4]) + (a[1] - a[5]) * (a[1] - a[5]);
    c[5] = (a[2] - a[6]) * (a[2] - a[6]) + (a[3] - a[7]) * (a[3] - a[7]);

    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (c[i] > c[j])
            {
                tmp = c[j];
                c[j] = c[i];
                c[i] = tmp;
            }
        }
    }
    if (c[0] == c[1] && c[1] == c[2] && c[2] == c[3] && c[4] == c[5])
    {
        num1 = c[0];
        printf("Yes %d\n", num1);
    }
    else
    {
        printf("No\n");
    }
    c[0] = (b[0] - b[2]) * (b[0] - b[2]) + (b[1] - b[3]) * (b[1] - b[3]);
    c[1] = (b[2] - b[4]) * (b[2] - b[4]) + (b[3] - b[5]) * (b[3] - b[5]);
    c[2] = (b[4] - b[6]) * (b[4] - b[6]) + (b[5] - b[7]) * (b[5] - b[7]);
    c[3] = (b[0] - b[6]) * (b[0] - b[6]) + (b[1] - b[7]) * (b[1] - b[7]);
    c[4] = (b[0] - b[4]) * (b[0] - b[4]) + (b[1] - b[5]) * (b[1] - b[5]);
    c[5] = (b[2] - b[6]) * (b[2] - b[6]) + (b[3] - b[7]) * (b[3] - b[7]);
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (c[i] > c[j])
            {
                tmp = c[j];
                c[j] = c[i];
                c[i] = tmp;
            }
        }
    }
    if (c[0] == c[1] && c[1] == c[2] && c[2] == c[3] && c[4] == c[5])
    {
        num2 = c[0];
        printf("Yes %d\n", num2);
    }
    else
    {
        printf("No\n");
    }
    if (num1 == 0 && num2 == 0)
    {
        printf("Peace\n");
    }
    else if (num1 > num2)
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }
}