/*
  conditional stmt ?if true val:if false val
*/

#include<stdio.h>
int main()
{
    int a=5,b=7;
    b>a?printf("b is greater\n"):printf("a is greater\n");
    return 0;
}