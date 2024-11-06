#include<stdio.h>
int main()
{
    int y=0;
    scanf("%d",&y);
    if(y%4==0&&y%100!=0)
       printf("It is leap year");
    else if(y%100==0&&y%400==0)
    printf("It is a leapyear");
    else
    printf("it is not a leap year");
    return 0;


}