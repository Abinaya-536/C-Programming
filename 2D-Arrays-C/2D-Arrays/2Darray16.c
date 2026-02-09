#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j;
    int sum;
    int minSum = -1;
    int minRow = -1;

 
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
        sum = 0;

        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }

     
        if (sum != 0)
        {
            if (minSum == -1 || sum < minSum)
            {
                minSum = sum;
                minRow = i;
            }
        }
    }

  
    printf("%d", minRow);

    return 0;
}
