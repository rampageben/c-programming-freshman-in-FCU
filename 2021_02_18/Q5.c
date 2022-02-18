#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i, tmp = 0;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        int k = 0;
        char a[100];
        char b[100];
        tmp = 0;
        gets(a);
        for (i = strlen(a) - 1; i >= 0; i--)
        {
            if (a[i] != ' ')
            {
                if ('0' <= a[i] && a[i] <= '9')
                {
                    tmp = a[i] - '0';
                }
                if ('A' <= a[i] && a[i] <= 'Z')
                {
                    if ((a[i] + tmp) > 'Z')
                    {
                        b[k] = 'A' + (a[i] + tmp - 'Z' - 1);
                    }
                    else
                    {
                        b[k] = a[i] + tmp;
                    }
                    k++;
                }
            }
        }
        for (i = k - 1; i >= 0; i--)
        {
            printf("%c", b[i]);
        }
        printf("\n");
    }
}