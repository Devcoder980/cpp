#include <stdio.h>
void main()
{
    int a[5][5];
    int count = 1;
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            a[r][c] = count++;
        }
    }

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%4d", a[r][c]);
        }
        printf("\n");
    }
    printf("\n\n Output zigzag line\n");
   
    for (int r = 0; r <= 5; r++)
    {
        if (r % 2 == 0)
        {
            for (int c = 0; c < 5; c++)
            {
                printf("%4d", a[r][c]);
            }
        }
        else
        {
            for (int c = 5; c >= 1; c--)
            {
                printf("%4d", a[r][c]);
            }
        }
        printf("\n");
    }
}