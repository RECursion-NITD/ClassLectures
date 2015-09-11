#include<stdio.h>
int main()
{
    int n,i;
    int *a;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        printf("%d ",a[i]);
    }
    return 0;
}
