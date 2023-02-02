#include<stdio.h>
void main()
{
    int count=5;
    for (int i = 0; i < count; i++)
    {
        for (int j = count; j >i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    for (int i = 1; i <= count-1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = (count-i)*2-1; k >0 ; k--)
        {
            printf("*");
        }
        printf("\n");
        
    }

}