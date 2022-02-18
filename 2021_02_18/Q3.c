#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, i;
    scanf("%d", &n);
    while (n--)
    {
        int sum = 0, tmp = 1;
        scanf("%d", &m);
        int a[m];
        for (i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i < m; i++)
        {
            if (a[i] == a[i - 1])
            {
                tmp++;
                if (i == m - 1)
                {
                    if (tmp > sum)
                    {
                        sum = tmp;
                    }
                }
            }
            if (a[i] != a[i - 1])
            {
                if (tmp > sum)
                {
                    sum = tmp;
                }
                tmp = 1;
            }
        }
        printf("%d\n", sum);
    }
}