// wirite program to create a clac

#include <stdio.h>
int getadd(int num1, int num2)
{
    return num1 + num2;
}
int getsub(int num1, int num2)
{
    return num1 - num2;
}
int getmul(int num1, int num2)
{
    return num1 * num2;
}
int getdiv(int num1, int num2)
{
    return num1 / num2;
}
int getmodule(int num1, int num2)
{
    return num1 % num2;
}
int max(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("num1 greter");
    }
    else
    {
        printf("num2 greter");
    }
}
int min(int num1, int num2)
{
    if (num1 < num2)
    {
        printf("num1 lassthen");
    }
    else
    {
        printf("num2 lassthen");
    }
}
int eql(int num1, int num2)
{
    if (num1 == num2)
    {
        printf("both are eql");
    }
    else
    {
        printf("both are not eql");
    }
}

void main()
{
    int num1, num2, option, countiune = 1;
    float ans;

    do
    {
        printf("enter num1:");
        scanf("%d", &num1);
        printf("enter num2:");
        scanf("%d", &num2);
        printf("\nenter 1add:");
        printf("\nenter 2sub:");
        printf("\nenter 3mul:");
        printf("\nenter 4div:");
        printf("\nenter 5module:");
        printf("\nenter 6max:");
        printf("\nenter 7min:");
        printf("\nenter 8eql:");
        printf("\nenter option:");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            ans = getadd(num1, num2);
            printf("the add is : %f", ans);
            break;
        }
        
        printf("\nselect any one \n 1 for contiune \n2 for exit ");
        scanf("%d", &countiune);
        if(countiune<1&&countiune>2)
        {
            printf("invalid");
            break;
        }

    } while (countiune == 1);
    
}
