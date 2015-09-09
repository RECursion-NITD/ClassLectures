#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
void merge(ll *a,ll lb,ll mid,ll ub)
{
    ll c[ub-lb+1];
    ll i=0,lp=lb,up=mid+1;
    while(lp<=mid&&up<=ub)
    {
        if(a[lp]<a[up])
        {
            c[i++]=a[lp++];
        }
        else
        {
            c[i++]=a[up++];
        }
    }
    while(lp<=mid)
    c[i++]=a[lp++];
    while(up<=ub)
    c[i++]=a[up++];
    ll j;
    for(j=0;j<i;j++)
    a[j+lb]=c[j];
    return;
}
void mergesort(ll *a,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    ll n,i;
    scanf("%lld",&n);
    ll a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%lld ",a[i]);
    return 0;
}
