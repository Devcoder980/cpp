#include <stdio.h>
void main()
{
    int count=6;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
}