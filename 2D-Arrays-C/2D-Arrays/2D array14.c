#include <stdio.h>

int main()
{
    int r, c;
    int i, j;

       scanf("%d %d", &r, &c);

    int a[r][c];

       for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int maxSum = 0;
    int colIndex = 0;

      for(j = 0; j < c; j++)
    {
        int sum = 0;

        for(i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }

                if(j == 0 || sum > maxSum)
        {
            maxSum = sum;
            colIndex = j;
        }
    }

    // Print column index with maximum sum
    printf("%d", colIndex);

    return 0;
}
