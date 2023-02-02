#include <stdio.h>
void main()
{
    int size=5;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i==0 || i==size-1)
            {
                printf("*");
            }
            else if (j==0|| j==size-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
            
        }
        printf("\n");
    }
    
}