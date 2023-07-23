// &&,||
//write a program to findout which number is greter out of given out of given 3 num
#include <stdio.h>

void main()
{
    int a,b,c;
    printf("\nenter the value of a");
    scanf("%d",&a);
    printf("\nenter the value of b");
    scanf("%d",&b);
    printf("\nenter the value of c");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("\n a is greter");
    }
    else if (b>a && b>c)
    {
       printf("\n b is greter");
    }
    else if (c>a && c>b)
    {
        printf("\n c is greter");
    }
    else
    {
        printf("all are same");
    }
    printf("\n good bye");
}
