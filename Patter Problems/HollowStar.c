#include<stdio.h>
void main()
{
    int count=5;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            printf("^");
        }
        for (int i = 0; i < count-i; i++)
        {
            printf("*");
        }
        
        
        printf("\n");
        
    }
    
}