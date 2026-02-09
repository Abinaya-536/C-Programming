#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j, num;
    int count = 0;
    int isPrime;

       scanf("%d %d", &r, &c);

      for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

      for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            num = a[i][j];

            if (num <= 1)
                continue;

            isPrime = 1;

            for (int k = 2; k <= num / 2; k++)
            {
                if (num % k == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
                count++;
        }
    }

       printf("%d", count);

    return 0;
}
