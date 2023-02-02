#include <stdio.h>
void main()
{
    int f = 0, f1 = 1, f2;
    int count = 10;
    printf("\n%d %d ",f,f1);
    for (int i = 2; i < count; i++)
    {
        f2=f1+f;
        printf("%d ",f2);
        f=f1;
        f1=f2;
    }
}