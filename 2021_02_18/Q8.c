#include <stdio.h>

int main()
{
    int n1[2] = {0};
    int n2[2] = {0};
    double n1s[2] = {0};
    double n2s[2] = {0};
    double tmp;
    int i, j;
    scanf("%d%d", &n1[0], &n2[0]);
    for (i = n1[0]; i < n2[0]; i++)
    {
        n1s[0] = 30 * i;
        if (30 * i % 90 == 0 && 30 * i % 180 != 0 && i == n1[0])
        {
            printf("%02d:00 degree=90.00\n", i);
        }
        for (j = 0; j < 60; j++)
        {
            n1s[0] = n1s[0] + 0.5;
            n1s[1] = n1s[1] + 6;
            if (n1s[0] > n1s[1])
            {
                tmp = n1s[0] - n1s[1];
            }
            else
            {
                tmp = n1s[1] - n1s[0];
            }
            while (tmp > 180)
            {
                tmp = 360.0 - tmp;
                if (tmp < 0)
                {
                    tmp = tmp * -1;
                }
            }
            if (tmp < 0)
            {
                tmp = tmp * -1;
            }
            if (tmp > 180)
            {
                tmp = 360.0 - tmp;
            }
            if (88.0 <= tmp && tmp <= 92.0)
            {
                if (j + 1 == 60)
                {
                    printf("%02d:00 degree=%.2f\n", i + 1, tmp);
                }
                else
                {
                    printf("%02d:%02d degree=%.2f\n", i, j + 1, tmp);
                }
            }
        }
        n1s[1] = 0;
    }
}