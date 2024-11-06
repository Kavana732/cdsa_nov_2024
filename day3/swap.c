#include<stdio.h>
int main()
{
   int x=2,y=45,temp=0;
   scanf("%d%i",&x,&y);
   printf("Before swap x=%d y=%i",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("Before swap x=%d y=%i",x,y);
   return 0;
}