#include<stdio.h>
int main()
{
    int n,a[10],sum=0,esum=0,osum=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i++]);
for(int i=0;i<n;i++)
{
if(a[i]%2==0)
esum+=a[i];
else
osum+=a[i];
}
printf("%d %d",esum,osum);

return 0;

}