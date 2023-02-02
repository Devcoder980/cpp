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