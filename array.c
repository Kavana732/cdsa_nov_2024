#include<stdio.h>
int main(){
    int n=0,a[100],lar=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]))
    lar=a[0];
    
    for(int i=1;i<n;i++)if(a[i]>lar)lar=a[i];
    printf("%d",lar);
    return 0;
}