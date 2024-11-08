#include<stdio.h>
int sod(int)
int main()
{
    int n=0
    scanf("%d",&n);
    printf("The sum of digit of %d is %d",n,sod(n));
    return 0;
}
int sod(int);
{
    if(n<=0)return 0;
    if(n==1)return 1;
    return(n%10)+sod(n/10);
}