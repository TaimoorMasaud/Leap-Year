#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0)
    {
    printf("The year is leap ");
    }
    else
    {
    printf("the year is not leap");
    }
}
