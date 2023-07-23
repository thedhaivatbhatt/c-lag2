// write a program to new drive calc. using char

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2, option;
    float ans;
    char choice = 'c';
    while (choice == 'c')
    {

        printf("enter the value of num1");
        scanf("%d", &num1);
        printf("enter the value of num2");
        scanf("%d", &num2);
        printf("\n enter the value 1 add");
        printf("\n enter the value 2 sub");
        printf("\n enter the value 3 mul");
        printf("\n enter the value 4 div");
        fflush(stdin);
        scanf("%c", &choice);

        if (choice == '1')
        {
            ans = num1 + num2;
            printf("%f", ans);
        }
        else if (choice == '2')
        {
            ans = num1 - num2;
            printf("%f", ans);
        }
        else if (choice == '3')
        {
            ans = num1 * num2;
            printf("%f", ans);
        }
        else if (choice == '4')
        {
            ans = num1 / num2;
            printf("%f", ans);
        }
        else
        {
            printf("invalid");
            fflush(stdin);
            printf("\n select your way \n press c for countiune \n");
            scanf("%c", &choice);
        }
        printf("goodbye");
    }
}