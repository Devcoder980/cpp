#include <stdio.h>
void main()
{
    int count=5;
    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <=i; k++)
        {
            printf("*");
        }
        
        
        printf("\n");
    }
    
}