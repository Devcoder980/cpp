#include <stdio.h>
void main()
{
    int count = 5;
    for (int i = count; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int k = count - i; k > 0; k--)
        {
            
            printf(" ");
        }

        printf("\n");
    }
}