// Enter the number of rows: 3
// 1 2 3
// 1 2 3
// 1 2 3
// #include<stdio.h>
// void main()
// {
//     int n=3;
//     printf("Enter the number of rows:%d\n",n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ",j+1);
//         }
//         printf("\n");

//     }
// **********************************************************************************************

// }
// Enter the number of rows: 3
// 1 1 1
// 2 2 2
// 3 3 3
// #include<stdio.h>
// void main()
// {
//     int n=3;
//     printf("Enter the number of rows:%d\n",n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ",i+1);
//         }
//         printf("\n");

//     }

// }

// **********************************************************************************************
// Enter the number of rows: 3
// a a a
// b b b
// c c c
// #include<stdio.h>
// void main()
// {
//     int n=3;
//     printf("Enter the number of rows:%d\n",n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c ",i+97);
//         }
//         printf("\n");

//     }

// }
// **********************************************************************************************
// Enter the number of rows: 3
// A A A
// B B B
// C C C
// #include<stdio.h>
// void main()
// {
//     int n=3;
//     printf("Enter the number of rows:%d\n",n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c ",i+65);
//         }
//         printf("\n");

//     }

// }
// **********************************************************************************************
// Enter the number of rows: 3
// A B C
// A B C
// A B C
// #include<stdio.h>
// void main()
// {
//     int n=3;
//     printf("Enter the number of rows:%d\n",n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c ",j+65);
//         }
//         printf("\n");

//     }

// }
// **********************************************************************************************
// Enter the number of rows: 3
// a a a
// B B B
// c c c
// #include <stdio.h>
// void main()
// {
//     int n = 3;
//     printf("Enter the number of rows:%d\n", n);

//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%c ", j + 97);
//             }
//         }
//         else
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%c ", j + 65);
//             }
//         }

//         printf("\n");
//     }
// }
// **********************************************************************************************
// Enter the number of rows: 5
// 1 1 1 1 1
// 1 1 1 2 2
// 1 1 3 3 3
// 1 4 4 4 4
// 5 5 5 5 5

// #include <stdio.h>
// void main()
// {
//     int n = 5;
//     printf("Enter the number of rows:%d\n", n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j < n-i)
//             {
//                 printf(" Value of i:%d\n",i);
//                 printf(" Value of j:%d\n",j);
//                 printf(" Value of n-i:%d\n",n-i);
//                 printf("%d ",1);
//             }
//             else
//             {
//                 printf("%d ",i+1);
//             }
//         }
//         printf("\n");
//     }
// }

// **********************************************************************************************

// https://www.knowprogram.com/c-programming/pattern-programs-in-c/
// Enter the number of rows: 5
// * * * * *
// * A B C *
// * D E F *
// * G H I *
// * * * * *
// #include <stdio.h>
// void main()
// {
//     int count = 10;
//     int inc=0;
//     for (int i = 0; i < count; i++)
//     {
//             for (int j = 0; j < count; j++)
//             {
//                 if (j==0 || j==count-1 || i==0 || i==count-1)
//                 {
//                     printf("* ");
//                 }
//                 else
//                 {
//                     if (inc == 26)
//                     {
//                         inc=0;
//                     }
//                     printf("%c ",inc+65);

//                     inc++;
//                 }

//             }
//             printf("\n");
//     }
// }
// **********************************************************************************************
// *
// * *
// * * *
// * * * *
// * * * * *
// #include <stdio.h>
// void main()
// {
//     int count=5;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }

// }
// **********************************************************************************************
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// #include <stdio.h>
// void main()
// {
//     int count=5;
//     for (int i = 1; i <= count; i++)
//     {
//         for (int j = i; j>=1 ; j--)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");

//     }

// }
// **********************************************************************************************
// Enter number of rows: 5
//      1
//      2    3
//      4    5    6
//      7    8    9   10
//     11   12   13   14   15
// #include <stdio.h>
// void main()
// {
//     int count=5;
//     int inc=1;
//     for (int i = 1; i <= count; i++)
//     {
//         for (int j = i; j>=1 ; j--)
//         {
//             printf("%d ",inc);
//             inc++;
//         }
//         printf("\n");

//     }

// }
// **********************************************************************************************
// Enter the number of rows: 5
// *
// $ *
// * $ *
// $ * $ *
// * $ * $ *
// #include <stdio.h>
// void main()
// {
//     int count = 10;
//     int inc = 1;
//     for (int i = 1; i <= count; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             if (inc % 2 == 0)
//             {
//                 printf("$ ");
//             }
//             else
//             {
//                  printf("* ");
//             }
//              inc++;
//         }
//         printf("\n");
//     }
// }
// **********************************************************************************************
// Enter number of rows: 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// #include<stdio.h>
// void main()
// {
//     int n=5;
//     for (int r = 0; r < n; r++)
//     {
//         for (int c = 1; c < n-r; c++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= r; k++)
//         {
//             printf("@ ");
//         }
        
//         printf("\n");
//     }
    
// }
// **********************************************************************************************
// Enter number of rows: 5
//      1
//     121
//    12321
//   1234321
//  123454321
#include<stdio.h>
void main()
{
    int n=5;
    int a=0;
    for (int r = 0; r <= n; r++)
    {
        for (int c = 0; c < n-r; c++)
        {
            printf("");
        }
        for (int k = 1; k <=(2*r-1); k++)
        {
            if (k<r)
            {
                printf("%d",k);
            }
            else if (k==r)      
            {
                printf("%d",k);
                a=k;
            }
            else
            {
                printf("%d",--a);
            }
            
        }
        printf("\n");
        
    }
    
}