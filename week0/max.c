#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%lld\n",a);
        else printf("%lld\n",c);
    }
    else
    {
    if(b>c)
    printf("%lld\n",b);
        else printf("%lld\n",c);
    }
    return 0;
}
