#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, m, i, j, x, k;
    scanf("%d%d", &n, &m);
    char b;
    int a[m + 1][n + 1];
    getchar();
    for (i = 1; i < m + 1; i++)
    {

        for (j = 1; j < n + 1; j++)
        {
            scanf("%c", &b);
            a[i][j] = (int)b - '0';
        }
        getchar();
    }
    int num = 0;
    for (i = 1; i < m + 1; i++)
    {
        for (j = 1; j < n + 1; j++)
        {
            for (k = 1; k < m + 1; k++)
            {
                for (x = 1; x < n + 1; x++)
                {
                    if (a[i][j] != 0 && a[k][x] != 0)
                    {
                        if (num < pow((i - k) * (i - k) + (j - x) * (j - x), 0.5))
                        {
                            num = pow((i - k) * (i - k) + (j - x) * (j - x), 0.5);
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", num);
}