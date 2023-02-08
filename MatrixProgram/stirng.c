#include<stdio.h>
#include<string.h>
void main()
{
    char s[20]="prabhudev";
    char str[10];
    int a=0;
    for (int i = strlen(s)-1; i>0; i--)
    {
        str[a]=s[i];
        a++;
    }
    printf("%s",str);
    
}