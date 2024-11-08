#include<stdio.h>
long fib(int);
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%ld",fib(n));
    return 0;
}
long fib(int no){
    if(no<=1)return(long)1;
    return fib(no-1)+fib(no-2);

}