#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, num = 0, ti = 0;
    char d[10] = {0};
    scanf("%d", &n);
    int a[n]; //幾種分類
    int b[n]; //存答案
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    getchar();
    for (i = 0; i < n; i++)
    {
        char c[a[i]][10];
        for (j = 0; j < a[i]; j++)
        {
            gets(c[j]);
        }

        for (j = 0; j < a[i]; j++)
        {
            for (k = j + 1; k < a[i]; k++)
            {
                if (strcmp(c[j], d) != 0 && strcmp(c[k], d) != 0)
                {
                    if (strcmp(c[j], c[k]) == 0)
                    {
                        strcpy(c[j], d);
                        strcpy(c[k], d);
                        num = num + 2;
                    }
                }
            }
        }
        b[ti] = a[i] - num;
        num = 0;
        ti++;
    }
    for (i = 0; i < ti; i++)
    {
        printf("%d\n", b[i]);
    }
}