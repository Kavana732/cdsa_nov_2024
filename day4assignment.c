#include<stdio.h>
int power(int base,int exp){
    if(exp==0){
        return 1;
    }
    else if(exp%2==0)
    {
        return power(base*base,exp/2);
    }
    else{
        return base*power(base*base,(exp-1)/2);
    }
}
int main()
{
    int base,exp;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exponent");
    scanf("%d",&exp);
    printf("The exp of %d*%d is %d\n",base,exp,power(base,exp));
    return 0;
}