//example of array structure

#include<stdio.h>
#include<stdlib.h>
struct time
{
     int hours;
    float min_sec;
    char name;
};
void main()
{
    struct time conutry[3];
    int count;
    for(count=0;count<3;count++)
    {
        printf("enter honurs for country %d:",count+1);
        scanf("%d",&conutry[count].hours);
         printf("enter min_sec for country %d:",count+1);
        scanf("%f",&conutry[count].min_sec);
        fflush(stdin);
         printf("enter name for country %d:",count+1);
        scanf("%c",&conutry[count].name);
    }
    for (count=0;count<3;count++)
    {
        printf("\n the time of conutry %d honurs: %d  min_sec : %f name :%c",count+1,conutry[count].hours,conutry[count].min_sec,conutry[count].name);
    }
    

}
