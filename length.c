#include<stdio.h>
int main()
{
    int Arr[]={1,2,3,,4,5};
    int length=sizeof(Arr)/sizeof(Arr[0]);
    printf("The size of array is %d",Arr)
    return 0;
}