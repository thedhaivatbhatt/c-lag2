// add
// sub
// mul
// div
// module
// min
// max
// eql
#include<stdio.h>
void main()
{
    int num1,num2,option;
    float ans;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);

    printf("enter 1 add \n enter 2 sub \n enter 3 mul \n enter 4 div \n enter 5 module \n enter 6 min \n enter 7 max \n enter 8 eql \n");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
        ans=num1+num2;
        printf("ans add of : %.2f",ans);
        break;
        case 2:
        ans=num1-num2;
        printf("ans sub of : %.2f",ans);
        break;
        case 3:
        ans=num1*num2;
        printf("ans mul of : %.2f",ans);
        break;
        case 4:
        ans=num1/num2;
        printf("ans div of : %.2f",ans);
        break;
        case 5:
        ans=num1%num2;
        printf("ans module of :%.2f",ans);
        break;
        case 6:
        if(num1<num2)
        {
            printf("num1 is small");
        }
        else
        {
            printf("num2 is small");
        }
        break;
        case 7:
        if (num1>num2)
        {
            printf("num1 is big");
        }
        else
        {
            printf("num2 is big");
        }
        break;
        case 8:
        if (num1 == num2)
        {
            printf("BOTH ARE EQL");
        }
        else
        {
            printf("both are not eql");
        }
        break;

        default:
        printf("\n invalid option");
        break;
    }
    printf("\n goodbye");
}