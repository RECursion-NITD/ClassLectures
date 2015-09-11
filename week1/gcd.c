#include<stdio.h>
#define ll long long int

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
ll n,k,hcf,lcm;
scanf("%lld",&a);
scanf("%lld",&b);
hcf=gcd(a,b);
lcm=(a*b)/hcf;
printf("%lld %lld\n",hcf,lcm);
return 0;
}

