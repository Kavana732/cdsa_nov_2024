#include<stdio.h>
int main()
{
    int a=3,b=6,p=0;
    scanf("%d%d",&a,&b);
    
        for(int i=0;i<b;i++){
            p +=a;
        }
    printf("product of %d and %d is:%d\n",a,b,p);
    return 0;
    

}