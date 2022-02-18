#include <stdio.h>
int num = 0;
void fun(int *n, int m, int n1, int n2)
{

    if (n1 <= 0 || n1 >= m || n2 <= 0 || n2 >= m)
    {
    }
    else if (*(n + m * n1 + n2) == 0)
    {
        num++;
        *(n + m * n1 + n2) = 2;
        fun(n, m, n1 + 1, n2);
        fun(n, m, n1, n2 + 1);
        fun(n, m, n1 - 1, n2);
        fun(n, m, n1, n2 - 1);
    }
}

int main()
{
    int n, i, m, k, j, x;
    // m邊長k障礙物數量
    scanf("%d", &n);
    while (n--)
    {
        num = 0;
        scanf("%d", &m);
        int a[m + 1][m + 1];
        scanf("%d", &k);
        int b[k][2];
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 1; i < m + 1; i++)
        {
            for (j = 1; j < m + 1; j++)
            {
                for (x = 0; x < k; x++)
                {
                    if (i == b[x][0] && j == b[x][1])
                    {
                        a[i][j] = 1;
                        break;
                    }
                    else
                    {
                        a[i][j] = 0;
                    }
                }
            }
        }
        int n1, n2;
        scanf("%d%d", &n1, &n2);
        fun(&a, m + 1, n1, n2);

        printf("%d\n", num);
    }
    return 0;
}